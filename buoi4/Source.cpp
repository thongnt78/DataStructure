#include "Header.h"
int& size(AR& m) {
	return m.n;
}
void init(AR& m) {
	m.n = 0;
}
bool isEmpty(AR m) {
	return m.n == 0;
}
bool isFull(AR m) {
	return m.n > mx;
}
int insert(AR& m, int idx, int k) {
	if (isFull(m) || idx<0 || idx>m.n) {
		throw "Error";
	}
	for (int i = m.n; i > idx; i--)

		m.list[i] = m.list[i - 1];

	m.list[idx] = k;
	m.n++;

	return 1;
}
void createCL(AR& m) {
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
void output(AR m) {
	for (int i = 0; i < m.n; i++)
	{
		cout << m.list[i] << "\t";
	}
}
//xóa phần tử trùng
int remove(AR & m, int idx) {
	if (isEmpty(m) || idx<0 || idx>m.n) {
		throw "Error";
	}
	for (int i = idx; i < m.n - 1; i++)
	{
		m.list[i] = m.list[i + 1];
	}
	//lấy phần tử bên cạnh gán qua và không bao giờ đi tới biên.
	m.n--;
	return 1;
}
void removeExist(AR& m) {
	for (int i = 0; i < size(m) - 1; i++)
	{
		for (int j = i + 1; j < size(m); j++)
		{
			if (m.list[j] == m.list[i])
			{
				remove(m, i);
				i--;
			}
		}
	}
}
int binarySearch(AR m,int k) {
	int left, right, mid;
	left = 0;
	right = size(m) - 1;
	do
	{
		mid = (left + right) / 2;
		if (m.list[mid] == k)return mid;
		else if (k > m.list[mid])
			left = mid + 1;
		else
			right = mid - 1;
	} while (left<=right);
	return -1;
}
//xác định xem có giá trị nào nhỏ hơn giá trị nhỏ nhất k(nhỏ hơn phần tử nhỏ nhất)
bool greaterMin(AR m, int k) {
	bool flag = false;
	for (int i = 0; i < size(m); i++)
	{
		if (m.list[i] < k) { flag = true; break; }
	}
	return flag;
}
//lớn hơn phần tử lớn nhất 
bool greaterMax(AR m, int k) {
	bool flag = true;
	for (int i = 0; i < size(m); i++)
	{
		if (m.list[i] > k) { flag = false; break; }
	}return flag;
} 


int positiveMin(AR m) {
	int idx = -1;
	for (int i = 0; i < size(m); i++)
	{
		if (m.list[i] > 0) {
			if (idx==-1)
			{
				idx = i;
			}
			else if (m.list[idx] > m.list[i]) {
				idx = i;
			}
		}
	}
	return idx;
}
//có thể gộp điều kiện lại với nhau nhưng sẽ chạy chậm hơn vì phải chạy nhiều điều kiện	
void swap(int& a, int& b) {
	int z = a;a = b;b = z;
}
void reverse(AR& m) {
	int i = 0,j = size(m)-1;
	while (i<j)
	{
		swap(m.list[i++], m.list[j--]);
	}
}
/*void createrCL(AR& m) {
	int x, idx;
	do
	{
		cout << "Enter a number: ";cin >> x;
		if (x == 0)break;
		cout << "Enter idx: ";cin >> idx;
		try
		{
			insert(m, idx, x);
		}
		catch (const char* s)
		{
			cout << "Error" << s;
		}
	} while (true);
}*/ 