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
        int cnt = 0;
        for(int i = 0; i < n - 1;i ++){
            int min_pos = i;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[min_pos]){
                    min_pos = j;
                }
            }
            if(i != min_pos){
                cnt++;
                swap(a[i], a[min_pos]);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}