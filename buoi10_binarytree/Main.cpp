#include "Header.h"
int main() {
	BST r;
	init(r);
	create(r);
	LNR(r);
	cout << endl;
	/*LRN(r);
	cout << endl;
	NLR(r);
	cout << endl;
	cout<<height(r);
	cout << endl << sumLNR(r);
	cout << endl << countLNR(r);*/
	/*int k;
	cin >> k;
	level(r, k);
	cout << endl;
	printLevelOrder(r);*/

	cout << "Tong la: " << sum1(r);
	return 0;
}