#include<iostream>
#include<set>

using namespace std;
set<int> se;
int cnt;
int a[1005], n, k;
void next(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        cnt = k;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        cnt = 0;
        for(int i = 1; i <= k; i++){
            if(se.find(a[i]) == se.end()){
                ++cnt;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
           cin >> a[i];
           se.insert(a[i]);
        }
        next();
        cout << cnt << endl;
        se.clear();
    }
    return 0;
}