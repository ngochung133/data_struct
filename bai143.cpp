#include<iostream>
#include<queue> // FIFO first in first out
#include<string>

using namespace std;

vector<string> res; // luu ket qua
void solve(){
    queue<string> q;
    q.push("1");
    res.push_back("1");
    while(res.size() < 100000){
        string top = q.front();
        q.pop();             // lay phan tu dau ra de noi 10 11
        res.push_back(top + '0');
        res.push_back(top + '1');
        q.push(top + '0');
        q.push(top + '1');
    }
}
int main(){
    solve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}