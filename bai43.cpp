#include<iostream>
#include<algorithm>

using namespace std;

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
        sort(a, a + n);
        long long sum1 = 0;
        long long sum2 = 0;
        for(int i = 0; i < n; i ++){
            if(i % 2 == 0){
                sum1 = sum1 *10 + a[i]; //234568 0*10+2 = 2 + 2*10 + 4=24 *10 + 6 =246
            }
            else{
                sum2 = sum2 * 10 + a[i];
            }
        }
        cout << sum1 + sum2  << endl; // tong min = vi tri le + vi tri chan
    }
    return 0;
}