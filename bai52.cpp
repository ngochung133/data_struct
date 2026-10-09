#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int> > a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end(), cmp);
        int pos = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i].first >= pos){
                pos = a[i].second;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}