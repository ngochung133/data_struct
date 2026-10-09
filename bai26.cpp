#include<iostream>
#include<vector>
#include<string>
using namespace std;

int n, a[100];
vector<string> v;
void in(int n){
    string s = "[";
    for(int i = 1; i < n; i++){
        s += to_string(a[i]) + " ";
    }
    s += to_string(a[n]) + "]";
    v.push_back(s);
}

void Try(int n){
    in(n);
    for(int i = 1; i <= n; i++){
        a[i] += a[i + 1];
    }
    if(n - 1) Try(n - 1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        Try(n);
        for(int i = v.size() - 1; i >= 0; i--){
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
    return 0;
}