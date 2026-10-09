#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int maxfreq = 0;
        map<char, int> mp;
        for(auto x : s){
            mp[x]++;
        }
        for(auto it : mp){
            maxfreq = max(maxfreq, it.second);
        }
        if(maxfreq <= (s.size() + 1) / 2){
            cout << "1";
        }
        else{
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}