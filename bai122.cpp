#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int ok = 0;
        for(auto it : mp){
            if(it.second > n / 2){
                ok = it.first;
                break;
            }
        }
    if(ok) cout << ok;
    else cout << "NO";
        cout << endl;
    }
    return 0;
}