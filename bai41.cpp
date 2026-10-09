#include<iostream>
#include<string>
using namespace std;

string lon(string n){
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '5') n[i] = '6';
    }
    return n;
}
string be(string n){
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '6') n[i] = '5'; 
    }
    return n;
}
int main(){
    string a, b;
    cin >> a >> b;
    int sum = 0;
    cout << stoll(be(a)) + stoll(be(b)) << " " << stoll(lon(a)) + stoll(lon(b));
}