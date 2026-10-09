#include<iostream>
#include<queue>

using namespace std;

bool check(string s, int n){
    int x = 0;
    for(int i = 0; i < s.size(); i++){
        x = (x * 10 + (s[i] - '0')) % n; // tach so du cua so to vd 98/5 = 0 * 10 + 9 / 5 du 4 -> 4 * 10 + 8 / 5 du 3
    }
    return x == 0;
}

void solve(){
    int n;
    cin >> n;
    queue<string> q;
    q.push("9");
    while(true){
        string top = q.front();
        q.pop();
        if(check(top, n)){
            cout << top;
            break;
        }
        q.push(top + '0');
        q.push(top + '9');
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