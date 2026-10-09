#include<iostream>
#include<cstring>
#include<set>
#include<vector>

using namespace std;

int n, k;
vector<string> v;
int x[100];

void in(){
    for(int i = 1; i <= k; i++){
        cout << v[x[i] - 1] << ' ';
    }
    cout << endl;
}

void Try(int  i){
    for(int j = x[i - 1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            in();
        }
        else{
            Try(i + 1);
        }
    }
}
int main(){
    cin >> n >> k;
    vector<string> nhap(n);
    for(int i = 0; i < n; i++){
        cin >> nhap[i];
    }
    set<string> se(nhap.begin(), nhap.end());
    v.assign(se.begin(), se.end());
    sort(v.begin(), v.end());
    n = v.size();   
    x[0] = 0;
    Try(1);
    return 0;
}