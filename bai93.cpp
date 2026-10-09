#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        set<int> s;
        for(auto it : a){
            while(it > 0){
                s.insert(it % 10);
                it /= 10;
            }
        }
        for(auto x : s){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}