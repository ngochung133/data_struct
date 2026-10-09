#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto x : s){
            mp[x]++;
        }
        int maxfreq = 0;
        for(auto it : mp){
            maxfreq = max(maxfreq, it.second);
        }
        if((maxfreq - 1) * (d - 1) > s.size() - maxfreq) cout << "-1"; // tan suat lon nhat * so ki tu trong khoang a -> a + d
        else cout << "1";
        cout << endl;
    }
    return 0;
}