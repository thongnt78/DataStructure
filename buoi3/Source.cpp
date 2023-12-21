#include "Header.h"
int& size(CL& m) {
	return m.n;
}
void exchangeSort(CL& m) {
	for (int i = 0; i < size(m) - 1; i++)
	{
		for (int j = i + 1; j < size(m); j++)
		{
			if (m.list[i] > m.list[j]) swap(m.list[i], m.list[j]);
		}
	}
}
void init(CL& m) {
	m.n = 0;
}
bool isEmpty(CL m) {
	return m.n == 0;
}
bool isFull(CL m) {
	return m.n > Max;
}
int insert(CL& m, int idx, int k) {
	if (isFull(m) || idx<0 || idx>m.n) {
		throw "Error";
	}
	for (int i = m.n; i > idx; i--)

		m.list[i] = m.list[i - 1];

	m.list[idx] = k;
	m.n++;

	return 1;
}
void createCL(CL& m) {
	int x, i = 0, count = 0;
	do
	{
		cout << "Enter a number ";
		cin >> x;
		if (x == 0) break;
		count += insert(m, i++, x);
	} while (true);
	cout << "Itetem insert is " << count << endl;
}
void output(CL m) {
	for (int i = 0; i < m.n; i++)
	{
		cout << m.list[i] << "\t";
	}
}
void BubbleSort(CL& m) {
	for (int i = 0; i < size(m); i++)
	{
		for (int j = size(m) - 1; j > i; j--)
		{
			if (m.list[j] > m.list[j - 1])
				swap(m.list[j], m.list[j - 1]);
		}
	}
}//kiểm tra tăng 
bool increment(CL m) {
	/*int count = 0;
	for (int i = 0; i < size(m)-1; i++)
	{
		if (m.list[i] > m.list[i + 1])
			count++;
	}
	return count == size(m) - 1;*/
	bool flag = true;
	for (int i = 0; i < size(m) - 1; i++)
	{
		if (m.list[i] > m.list[i + 1]) {
			flag = false;
			break;
		}
	}
	return flag;
}
void split(CL m, CL& m1, CL& m2) {
	size(m1) = 0;
	size(m2) = 0;
	for (int i = 0; i < size(m) / 2; i++)
		m1.list[size(m1)++] = m.list[i];

	for (int i = size(m) / 2; i < size(m); i++)
		m2.list[size(m2)++] = m.list[i];

}
void splitOE(CL m, CL& o, CL& e) {
	init(o);
	init(e);
	for (int i = 0; i < size(m); i++)
		if (m.list[i] % 2 == 0)
			o.list[size(o)++] = m.list[i];
		else
			e.list[size(e)++] = m.list[i];

}
void join(CL m, CL m1, CL m2) {
	init(m);
	for (int i = 0; i < size(m1); i++)
	{
		insert(m, i, m1.list[i]);
	}
	for (int i = 0; i < size(m2); i++)
	{
		insert(m, size(m) , m2.list[i]);
	}
}
void joinDE(CL& m, CL o, CL e)
{
	CL m1, m2;
	int i = 0, j = 0;
	init(m);
	while (size(o) < size(m1) &&
		size(e) < size(m2))
	{
		if (size(m) % 2 == 0)
			m.list[size(m)++] = o.list[i++];
		else
			m.list[size(m)++] = e.list[j++];
	}
	while (i < size(m1))
		m.list[size(m)++] = o.list[i++];
	while (j < size(m2))
		m.list[size(m)++] = e.list[j++];
}