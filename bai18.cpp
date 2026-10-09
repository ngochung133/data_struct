#include<iostream>

using namespace std;

int n, a[100], ok, cnt, b[100];


void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

void hoanvi(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
bool check(){
    for(int i = 1; i <= n; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
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
            hoanvi();
            cnt++;
            if(check()){
                cout << cnt << endl;
                break;
            }
        }
    }
    return 0;
}