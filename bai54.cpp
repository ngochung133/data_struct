#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<long long> a(n), b(m), c(k);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < k; i++) cin >> c[i];
        int e = 0, d = 0, f = 0;
        vector<int> res;
        while(e < n && d < m && f < k){
            if(a[e] == b[d] && b[d] == c[f]){
                res.push_back(a[e]);
                e++;
                d++;
                f++;
            }
            else{
                int minn = min(a[e], min(b[d], c[f]));
                if(minn == a[e]) e++;
                else if(minn == b[d]) d++;
                else f++;
            }
        }
        if(res.size() != 0){
        for(auto it : res){
            cout << it << " ";
        }
    }
    else cout << "NO";
    cout << endl;
    }
    return 0;
}