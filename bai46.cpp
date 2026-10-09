#include<iostream>
#include<algorithm>
using namespace std;

struct cv{
    int start,end;
};

bool cmp(cv a, cv b){
    return a.end < b.end;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    cv a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].start;
    }
    for(int i = 0; i < n; i++){
        cin >> a[i].end;
    }
    sort(a, a + n, cmp); // cai nao ket thuc truoc lam truoc
    int cnt = 1, i=0;
    for(int j = 1; j < n; j++){
        if(a[j].start >= a[i].end){
            cnt++;
            i = j;
        }
    }
    cout << cnt << endl;
    }
    return 0;
}