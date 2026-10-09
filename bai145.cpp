#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

int solve(){
    queue<string> q;
    q.push("1");
    int cnt = 0;
    int n;
    cin >> n;
    while(true){
        string top = q.front();
        q.pop();
        long long x = stoll(top);
        if(x >= n) break;
        cnt++;
        q.push(top + '0');
        q.push(top + '1');
        
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}