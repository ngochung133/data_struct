#include<iostream>

using namespace std;

int n, k,used[100];
string s;
char x[100];

void in(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << " ";
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0){
            x[i] = s[j - 1];
            used[j] = 1;
            if(i == n){
                in();
            } 
            else{
                Try(i + 1);
            }
            used[j] = 0;    
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        n = s.size();
        memset(used , 0, sizeof(used));
        Try(1);
        cout << endl;
    }
    return 0;
}