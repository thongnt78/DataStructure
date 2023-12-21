#include "Header.h"
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
	for (int  i = 0; i < m.n ; i++)
	{
		cout << m.list[i] << "\t";
	}
}
int remove(CL& m, int idx) {
	if (isEmpty(m) || idx<0 || idx>m.n) {
		throw "Error";
	}
	for (int i = idx; i < m.n-1; i++)
	{
		m.list[i] = m.list[i + 1];
	}
	//lấy phần tử bên cạnh gán qua và không bao giờ đi tới biên.
	m.n--;
	return 1;
}
//tìm phần tử lớn nhất
int max(CL m) {
	int mx = 0;
	for (int i = 1; i < m.n; i++)
	{
		if (m.list[mx]<m.list[i])
		{
			mx = i;
			//mx = m.list[i];
		}
	}
	return mx;
}
void sort(CL &m) {
	/*for (int i = 0; i < m.n - 1; i++)
	{
		for (int j = i+1; j < m.n; j++)
		{
			if (m.list[i]<m.list[j])
			{
				int z = m.list[i];
				m.list[i] = m.list[j];
				m.list[j] = z;
			}
		}
	}*/
	for (int j = 0; j < m.n-1; j++)
	{
		int mx = j;
		for (int i = j + 1; i < m.n; i++)
		{
			if (m.list[mx] < m.list[i])
			{
				mx = i;
				int temp = m.list[mx];
				m.list[mx] = m.list[j];
				m.list[j] = temp;
				//mx = m.list[i];
			}
		}
	}
	
}

