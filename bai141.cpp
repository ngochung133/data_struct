#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    int x;
    queue<int> q;
    while(t--){
       cin >> s;
       if(s == "PUSH"){
        cin >> x;
        q.push(x);
       }
       else if(s == "PRINTFRONT"){
        if(q.empty()){
            cout << "NONE";
        }
        else{
            cout << q.front();
        }
       }
       else if(s == "POP"){
        if(!q.empty()){
            q.pop();
        }
       }
       cout << endl;
    }
    return 0;
}