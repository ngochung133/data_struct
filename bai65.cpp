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
        if(mp.find(0) != mp.end()){
            cout << mp[0];
        }
        else cout << "0";
        cout << endl;
    }
    return 0;
}