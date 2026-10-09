#include<iostream>
#include<string>
#include<queue>
#include<deque>

using namespace std;

int main(){
    int t;
    cin >> t;
    int x;
    string s;
    deque<int> dq;
    while(t--){
        cin >> s;
        if(s == "PUSHFRONT"){
            cin >> x;
            dq.push_front(x);
        }
        else if(s == "POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
        }
        else if(s == "PUSHBACK"){
            cin >> x;
            dq.push_back(x);
        }
        else if(s == "POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }
        else if(s == "PRINTFRONT"){
            if(!dq.empty()){
                cout << dq.front();
            }
            else cout << "NONE";
        }
        else if(s == "PRINTBACK"){
            if(!dq.empty()){
                cout << dq.back();
            }
            else cout << "NONE";
        }
        cout << endl;
    }
    return 0;
}