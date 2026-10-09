#include<iostream>
#include<stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        stack<int> st;
        for(int i = 0; i < n; i++){
            if(st.empty()){
                st.push(i);
            }
            else{
                while(st.size() && a[st.top()] < a[i]){
                    b[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while(st.size()){
            b[st.top()] = - 1;
            st.pop();
        }
        for(auto x : b){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}