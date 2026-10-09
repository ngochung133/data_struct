#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ok = 0;
        for(int i = 2; i <= n / 2; i++){
            if(snt(i) && snt(n - i)){
                cout << i << " " << n - i;
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "-1";
        cout << endl;
    }
    return 0;
}