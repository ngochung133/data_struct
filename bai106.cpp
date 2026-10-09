#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n - 1; i++)
	{
		int min_pos = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min_pos])
				min_pos = j;
		swap(a[min_pos], a[i]);
		cout << "Buoc " << i + 1 << ": ";
		for (int j = 0; j < n; j++)
			cout << a[j] << " ";
		cout << endl;
	}
}