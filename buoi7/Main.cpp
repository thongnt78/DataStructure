#include "Header.h"
int main() {
	nodeptr head;
	init(head);
	createList(head);
	if (findx(head, 20))
	{
		addAfter(findx(head, 20), 99);
	}
	int idx;
	insertA(head, 5, 100);
//	outListReverse(head);
	outList(head);
    cout << endl;
	deleteBegin(head);
	deleteEnd(head);
	outList(head);
	return 0;
}