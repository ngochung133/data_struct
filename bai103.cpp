#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        vector<int> v;
        int ok = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        for(auto it : v){
            if(it == x){
               ok = 1;
        }
    }
        if(ok){
            cout << "1";
        }
        else{
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}