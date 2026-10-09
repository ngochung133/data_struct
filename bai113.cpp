#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<string> v;
void solve(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        bool ok = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                ok = 1;
            }
        }
        string tmp = "Buoc " + to_string(i + 1) + ": ";
        if(ok){
            for(int k = 0; k < n; k++){
                tmp += to_string(a[k]) + " ";
            }
        }
        else break;
        v.push_back(tmp);
    }
}
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
    solve(a, n);
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << endl;
    }
   v.clear();
}
    return 0;
}