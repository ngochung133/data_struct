#include<iostream>

using namespace std;

int n, a[100];

void in(int n){
    cout << "[";
    for(int i = 1; i < n; i++){
        cout << a[i] << " ";
    }
    cout << a[n];
    cout << "]";
    cout << endl;
}

void Try(int n){
     in(n);
    for(int i = 1; i < n; i++){
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
        cout << endl;
    }
    return 0;
}