#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

vector<string> v; 
void solve(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
        string tmp = "Buoc " + to_string(i  + 1) + ": ";
        for(int i = 0; i < n; i++){
            tmp += to_string(a[i]) + " ";
        }
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