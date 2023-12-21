#include "Header.h"
int main() {
	CL m;
	
	
	init(m);
	createCL(m);
	output(m);
	cout << endl;
	remove(m, 3);
	output(m);
	cout << endl;
	max(m);
	output(m);
	cout << endl;
	sort(m);
	output(m);
	return 0;
}