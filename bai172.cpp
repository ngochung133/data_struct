#include<iostream>

using namespace std;

int n, k, a[100];
void in(){
    for(int i  = 1; i <= n; i++){
        if(a[i] == 1){
            cout << "A";
        }
        else{
            cout << "B";
        }
    }
    cout << endl;
}
bool cmp(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt += a[i];
    }
    return cnt == k;
}
bool check(){
    if(cmp()){
        for(int i = 1; i <= n - 2; i++){
            if(a[i] != 1 && a[i + 1] != 1 && a[i + 2] != 1) return 0;
        }
        return 1;
    }
    return 0;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
    if(i == n){
        if(check()){
            in();
        }
    }
    else{
       Try(i + 1);
    }
}
}

int main(){
    cin >> n >>k;
     Try(1);
    cout << endl;
}