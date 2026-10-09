#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int n;
    string s;
    stack<int> st;
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        if(s == "PUSH"){
            cin >> n;
            st.push(n);
        }
        else if(s == "POP"){
            if(st.size()){
                st.pop();
            }
        }
        else if(s == "PRINT"){
            if(st.size()){
                cout << st.top() << endl;
            }
            else cout << "NONE" << endl;
        }
    }
    return 0;
}
    