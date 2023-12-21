#include "header.h"
int main() {
	nodeptr head;
	init(head);
	createStack(head);
	outStack(head);
	removeBegin(head);
	cout << endl;
	outStack(head);
	return 0;

}