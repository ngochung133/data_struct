#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> v;

void solve(int a[], int n){
    for(int i = 0; i < n; i++){
        int x = a[i]; 
        int pos = i - 1;
        while(pos >= 0 && x < a[pos]){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        string tmp = "Buoc " + to_string(i) + ": ";
        for(int k = 0; k <= i; k++){
            tmp += to_string(a[k]) + " ";
        }
        v.push_back(tmp);
        }
    }

int main(){
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
    return 0;
}