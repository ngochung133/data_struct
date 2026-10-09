#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        int ok = 0;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            if(a[i] <= k){
                ok = i;
            }
        }
        if(ok) cout << ok + 1;
        else{
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}

