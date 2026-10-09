#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int pos = i - 1; //5
        int x = a[i]; //7
        while(pos >= 0 && x < a[pos]){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
