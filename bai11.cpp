#include<iostream>
#include<algorithm>
using namespace std;
int n, a[100];
void nexthv(int a[], int n){
    int i = n - 1;
    while(a[i] > a[i + 1]){
        i--;
    }
    if(i == 0){
        for(int j = 1; j <= n; j++){
            a[j] = j; 
        }
    }
    else{
        int k = n;
        while(a[i] > a[k]) k--;
        swap(a[i], a[k]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        nexthv(a, n);
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}