#include<iostream>
#include<set>
#include<vector>
using namespace std;
int n, k, a[100], ok;

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i  = k;
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

int main(){
    cin >> n >> k;
    set<int> se;
    int b[n];
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        se.insert(b[i]);
    }
    ktao();
    ok = 1;
    vector<int> v;
    v.assign(se.begin(), se.end());
    n = v.size();
    while(ok){
        for(int i = 1; i <= k; i++){
            cout << v[a[i] - 1] << " ";
        }
        sinh();
        cout << endl;
    }
    return 0;
}