#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        auto it = find(v.begin(), v.end(), k);
        if(it != v.end()) cout << it - v.begin() + 1;
        cout << endl;
    }
    return 0;
}
