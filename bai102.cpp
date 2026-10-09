#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
unordered_map<int, int> mp;
bool sapxep(int x, int y){
    if(mp[x] != mp[y]){
        return mp[x] > mp[y];
    }
    return x < y;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        mp.clear();
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n, sapxep);
        for(int i = 0; i < n; i++){
            cout << a[i] << " 3";
        }
        cout << endl;
    }
    return 0;
}
