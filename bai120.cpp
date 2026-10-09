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
        map<int, int> m;
        pair<int, int> k;
         k.second = 1e9;
        int ok = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(m[a[i]] == 0){
                m[a[i]] = i;
            }
            else if(m[a[i]] < k.second){
                k.second = m[a[i]];
                k.first = a[i];
                ok = 1;
            }
        }
        if(ok){
           cout << k.first;
        }
        else cout << "NO";
        cout << endl;
    }
    return 0;
}