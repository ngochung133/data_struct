#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        if(s * m > n * (s - s / 7)){
            cout << "-1";
        }
        else{
            for(int i = 1; i <= s - s / 7; i++){
                if(n * i >= s * m){
                    cout << i;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;  
}