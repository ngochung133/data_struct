    #include<iostream>
    #include<algorithm>
    using namespace std;
   
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; 
            cin >> n;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            int sum;
            int min = a[0] + a[1];
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    sum = a[i] + a[j];
                    if(abs(sum) < abs(min)){
                        min = sum;
                    }
                }
            }
            cout << min;
            cout << endl;
        }
        return 0;
    }