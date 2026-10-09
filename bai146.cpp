#include<iostream>
#include<queue>

using namespace std;

void solve(){
    queue<string> q;
    q.push("1");
    int n;
    cin >> n;
    while(true){
        string top = q.front();
        q.pop();
        long long x = stoll(top);
        if(x % n == 0){
            cout << x; 
            break;
        }
        q.push(top + '0');
        q.push(top + '1');
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}