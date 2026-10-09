#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<vector>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        vector<string> v;
        q.push("6");
        q.push("8");
        while(q.front().size() <= n){
            string top = q.front();
            q.pop();
            v.push_back(top);
            q.push(top + '6');
            q.push(top + '8');
        }
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++){
            cout <<  v[i] << " ";
        }
    cout << endl;
}
return 0;
}