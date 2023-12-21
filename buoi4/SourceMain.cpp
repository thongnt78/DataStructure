#include "Header.h"
int main() {
	AR m;
	init(m);
	createCL(m);
	output(m);
	/*cout << endl;
	removeExist(m);
	output(m);
	int k;
	cout << "\nEnter value of K: ";cin >> k;
	if (binarySearch(m, k) == -1)
		cout << "\nNot find value!";
	else
		cout << "\nFind value " << k << " at location " << binarySearch(m, k);*/
	cout <<endl<< greaterMin(m, 3);
	cout << endl << greaterMax(m, 3);
	cout << endl;
	reverse(m);
	output(m);
	return 0;
} 