#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack<char> st;
        int ok = 0;
        for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top() == '('){
                ok = 1;
                break;
            }
            while(st.size() && st.top() != '('){
                st.pop();
            }
            st.pop();
        }
    }
    if(ok) cout << "Yes";
    else cout << "No";
    cout << endl;
    }
    return 0;
}