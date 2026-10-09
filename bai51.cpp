#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]){
            v.push_back(a[i]);
        }
    }
    n = v.size();
    sort(v.begin(), v.end());
    long long ans = max(v[0] * v[1], max(v[0] * v[1] * v[n - 1], max(v[n - 2] * v[n - 1], (v[n-3] * v[n-2] * v[n-1]))));
   cout << ans;
    return 0;
}