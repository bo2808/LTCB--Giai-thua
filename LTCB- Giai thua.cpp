

#include <iostream>
using namespace std;

int main() {
	int i = 1, sonhap, giaithua = 1;
	cout << "Nhap so:";
	cin >> sonhap;
	while (i <= sonhap) {
		giaithua = giaithua * i;
		i++; // i=1+1,
	}
	cout << "Giai thua cua" << sonhap << "la " << giaithua << endl;
	return 0;
}



