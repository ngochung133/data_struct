#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    string s;
   cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.size() && st.top() == '('){
            st.pop();
            }
            else
            st.push(s[i]);
        }
    }
    int cnt = 0;
    while(st.size()){
        char top1 = st.top();
        st.pop();
        char top2 = st.top();
        st.pop();
        if(top1 == top2){ //((
            cnt++;
        }
        else cnt += 2; // ()
    }
    cout << cnt << endl;
}
return 0;
}