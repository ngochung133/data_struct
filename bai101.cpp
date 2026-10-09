#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        sort(a, a + n);
        int l = a[0];
        int r = a[n - 1];
        int cnt = 0;
        for(int i = l; i <= r; i++){
            if(s.find(i) == s.end()){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}