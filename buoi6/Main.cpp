#include "Header.h"
int main() {
	nodeptr head = NULL;
	create(head);
	/*addLast(head, 10);
	addLast(head, 10);
	addLast(head, 10);
	addLast(head, 10);*/
	outList(head);
	/*addAfter(head, length(head)/2 , 100);
	cout << endl;
	outList(head);
	addBefore(head, length(head) / 2, 200);
	cout << endl;
	outList(head);
	int idx;
	cout << "\n Enter idx: "; cin >> idx;
	try
	{
		insertAt(head, idx, 1234);
	}
	catch (const char* s)
	{
		cout << "Error" << s;
	}
	cout << endl;
	outList(head);*/
	//deleteBegin(head);
	//deleteEnd(head);
	//deleteMid(head, length(head) / 2);
//	deleteAt(head, 2);
	/*cout << endl; 
	cout<<findX(head, 12);*/
	cout << endl;
	outList(head);
	return 0;
}