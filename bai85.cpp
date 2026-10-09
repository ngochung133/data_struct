#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int k;
bool cmp(int a, int b){
    if(abs(k - a) == abs(k - b)) return a < b;
    return abs(k - a) < abs(k - b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        for(auto it : a){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}