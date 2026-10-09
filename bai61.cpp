#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int sum = 0, ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            ans = max(ans, sum); // so sanh tong truoc voi tong sau
            if(sum < 0){
                sum = 0;    // neu tong cac phan tu dau tien < 0 coi nhu bo di, tang i tinh tong tu phan tu tiep theo
            }
        }
        cout << ans << endl;
    }
    return 0;
}