#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a1=0;
	int a[n];
	int a2=10;
	char b[n];
	for(int i=2;i<n;i++) {
		for(int j=i-2;j<=i;j++) {
			cout << static_cast<const void *> (&b[j]) << ' ';
		}
		cout << endl;
	}
	for(int i=2;i<n;i++) {
		for(int j=i-2;j<=i;j++) {
			cout << &a[j] << ' ';
		}
		cout << endl;
	}
	cout << &a1 << " " << &a2;
	return 0;
}
