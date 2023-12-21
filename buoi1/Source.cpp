#include "Header.h"
void inputA1D(A1D& m) {
	cout << "Enter a number of array ";
	cin >> m.n;
	while (m.n >= 100 || m.n < 0) {
		cout << "Enter a number again 0 < n < 100 ";
		cin >> m.n;
	}
	for (int i = 0;i < m.n;i++) {
		cout << "a[" << i << "]= ";
		cin >> m.a[i];
	}
}
void outputA1D(A1D m) {
	for (int i = 0;i < m.n;i++) {
		cout << m.a[i] << "\t";
	}
}
int searchlinear(A1D m, int key) {
	for (int i = 0;i < m.n;i++) {
		if (m.a[i] == key)
		{
			return i;
		}
	}
	return -1;
}
int searchlinearA(A1D m, int key) {
	int count = 0;
	for (int i = 0; i < m.n; i++)
	{
		if (m.a[i] == key)
		{
			count++;
		}if (count == 2)
		{
			return i;
		}
	}
	return -1;
}
//câu 3
bool compareAr(A1D m)  {
	int sum1 = 0;
	for (int i = 0;i < m.n % 2;i++) {
		sum1 += m.a[i];
	}
	int sum2 = 0;
	for (int i = m.n+1;i < m.n;i++) {
		sum2 += m.a[i];
	}
	if (sum2 > sum1) return true;
	return false;
}
//câu 4
int solefirst(A1D m) {
	for (int i = 0;i < m.n % 2;i++) {
		if (m.a[i] % 2 != 0) return i;
	}
	return -1;
}
//câu 5
float trb(A1D m) {
	int sum = 0, count = 0;
	for (int i = 0;i < m.n;i++) {
		if (m.a[i] % 2 != 0) {
			sum += m.a[i];
			count++;
		}
		return sum / count;
	}
}
//câu 1,2
void outputmid12(A1D m) {
	cout << "midle of array is " << (m.a[m.n % 2]);
	if (m.a[0] % 2 == 0)
		cout << "la so chan";
	else cout << "khong phai so chan";

	if (m.a[m.n - 1] % 2 == 0)
		cout << "la so chan";
	else cout << "khong phai so chan";
}
//câu 6
int tichtrung(A1D m, int key) {
	int tich = 1;
	for (int i = 0;i < m.n;i++) {
		if (m.a[i] == key)
		{
			tich *= m.a[i];
		}
	}
	return tich;
}
//câu 7 
bool checkDoiXung(A1D m) {
	int i = 0, j = m.n - 1;
	for (i;i < m.n % 2;i++) {
		for (j;j > m.n % 2;j--) {
			if (m.a[i] == m.a[j]) { i++;j--; }
			else return false;
		}
	}
	return true;
}