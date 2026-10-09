#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> odd;
    vector<int> even;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) odd.push_back(a[i]);
    }
    for(int i = 0; i < n; i++){
        if(i % 2 != 0) even.push_back(a[i]);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());
    int iodd = 0, ieven = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) cout << odd[iodd++] << " ";
        else cout << even[ieven++] << " ";
    }
    return 0;
}