#include "header.h"
int main() { 
	LL l;
	init(l);
	createLL(l);
	outputLL(l);
	int x,k;
	cout << "\nEnter k= "; cin >> k;
	if (Search(l, k)) {
		node* q, * p;
		q = Search(l, k);
		cout << "\nInput x= "; cin >> x;
		p = makeNode(x);
		put2(l, q, p);
		outputLL(l);
	}
	else
	{
		cout << "\nFind not found.";
	}
	return 0;
}