#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        int maxx = 0;
        st.push(-1);
        for(int i = 0;i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                st.pop(); // delete starting point in oder to tru vi tri truoc bat dau
                if(st.size()){
                    maxx = max(maxx, i - st.top());
                } 
                else st.push(i); // tim dau ngoac dung tiep theo bi ngan chan boi dau ) sai;
            }
        }
        cout << maxx << endl;
        }
        return 0;
    }
