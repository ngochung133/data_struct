#include<iostream>
#include<queue>
#include<stack>
#include<string>

using namespace std;

void solve(){
    int n;
    cin >> n;
    queue<string> q;
    stack<string> st;
    q.push("6");
    q.push("8");
    while(q.front().size() <= n){
        string top = q.front();
        st.push(top);
        q.pop();
        q.push(top + '6');
        q.push(top + '8');
    }
    cout << st.size() << endl;
    while(st.size()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}