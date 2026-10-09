#include<iostream>

using namespace std;

int n, k, a[100], b[100];

void in(){
    cout << "[";
    for(int i = 1; i< n; i++){
        cout << a[i] << " ";
    }
    cout << a[n] << "]";
}

void Try(int i, int pos, int sum){
    for(int j = pos + 1; j <= n; j++){
        b[j] = a[i];
        sum += a[i];
        if(sum == k){
            in();
        }
        else if(sum < k){
            Try(i + 1, j, sum);
        }
        sum -= a[i];
    }
}