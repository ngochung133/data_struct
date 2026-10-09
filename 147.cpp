#include<iostream>
#include<string>
#include<queue>
#include<stack>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        stack<string> st;
        q.push("6");
        q.push("8");
        while(q.front().size() <= n){
            string top = q.front();
            q.pop();
            st.push(top);
            q.push(top + '6');
            q.push(top + '8');
        }
    while(st.size()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
return 0;
}