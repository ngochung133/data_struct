#include<iostream>
#include<string>
#include<stack>

using namespace std;

int cal(int a, int b, char c){
    if(c == '+') return a + b;
    if(c == '-') return a - b;
    if(c == '*') return a * b;
    if(c == '/') return a / b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                st.push(s[i] - '0');
            }
            else{
                int fi = st.top();
                st.pop();
                int se = st.top();
                st.pop();
                st.push(cal(se, fi, s[i])); // tien to top1 - top 2; hau to top 2 - top1
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}