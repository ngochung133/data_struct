#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool check(string s){
    stack<char> st;
    for(auto x : s){   
        if(x == '(' || x == '[' || x == '{'){
            st.push(x);
        }
        else{
            if(st.size() == 0) return 0;
            else if(x == ')' && st.top() != '(') return 0;
            else if(x == ']' && st.top() != '[') return 0;
            else if(x == '}' && st.top() != '{') return 0;
            st.pop();
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)){
            cout << "YES";
        }
        else cout << "NO";
        cout << endl;
    }
    return 0;
}