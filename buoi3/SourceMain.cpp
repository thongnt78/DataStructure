#include "Header.h"
int main() {
	CL m, m1, m2, o, e;
	init(m);
	createCL(m);
	//exchangeSort(m);
		//BubbleSort(m);
	output(m);
	/*if (increment(m))
		cout << "\nis the decreasing array.";
	else
		cout << "\nis not the decreasing array.";*/
	split(m, m1, m2);
	cout << endl;
	output(m1);
	cout << endl;
	output(m2);

	//splitOE(m, o, e);
	//cout << endl;
	//output(o);
	//cout << endl;
	//output(e);

	join(m, m1, m2);
	cout << endl;
	output(m);

	//joinDE(m, m1, m2);
	//cout << endl;
	//output(m);
	return 0;
}