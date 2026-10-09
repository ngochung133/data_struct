#include<iostream>
#include<string>

using namespace std;

string nextsinh(string s){
    int n = s.size();
    int i = n - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i >= 0){
        s[i] = '1';
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << nextsinh(s);
        cout << endl;
    }
    return 0;
}