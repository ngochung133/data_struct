#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int ok = 0;
       for(auto it : mp){
        if(it.first == k){
            ok = it.second;
        }
       }
       if(ok) cout << ok;
       else cout << "-1";
       cout << endl;
    }
    return 0;
}