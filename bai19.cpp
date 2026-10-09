#include<iostream>

using namespace std;

int a[100], b[100], n, k ,ok, cnt;

void ktao(){
    for(int i = 1; i <= n ;i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
bool check(){
    for(int i = 1; i <= k; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int  main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k;i++){
            cin >> b[i];
        }
        ktao();
        ok = 1;
        cnt = 1;
        if(check()){
            cout << cnt << endl;
            continue;
        }
        while(ok){
            sinh();
            cnt++;
            if(check()){
                cout << cnt << endl;
                break;
            }
        }
    }
    return 0;
}