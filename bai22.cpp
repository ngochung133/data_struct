#include<iostream>

using namespace std;

int n, ok, a[100];
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i] = 1;
    }
}

bool check(){
    if(a[1] != 1 || a[n] != 0){
        return 0;
    }
    for(int i = 1; i <n; i++){
        if(a[i] == 1 && a[i + 1] == 1){
            return 0;
        }
    }
        for(int i = 1; i < n - 2; i++){
            if(a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0) return 0;
        }
return 1;
}
int main(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        if(check()){
        for(int i = 1; i <= n; i++){
            if(a[i] == 1) cout << '8';
            else cout << '6';
        }
         cout << endl;
    }
    sinh();
}
return 0;
}