#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
vector<string> v;
void solve(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int pos = i;
        for (int j = i + 1; j < n; j++){
            if(a[pos] > a[j]){
                pos = j;
            }
        }
        swap(a[i], a[pos]);
        string tmp = "Buoc " + to_string(i + 1) + ": ";
        for(int k = 0; k < n; k++){
            tmp += to_string(a[k]) + " ";
        }
        v.push_back(tmp);
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    solve(a, n);
    for(int j = v.size() - 1; j >= 0; j--){
        cout << v[j] << endl;
    }
    v.clear();
    return 0;
}

