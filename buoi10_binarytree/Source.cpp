#include "Header.h"
//hàm khởi tạo, kiểm tra, tạo node 
void init(BST& r) {
	r = NULL;
}
bool isEmpty(BST r) {
	return r == NULL;
}
node makeNode(typeinfo x) {
	node p = new Node;
	if (isEmpty(p))return p;
	p->data = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}
int insert(BST& r, typeinfo x) {
	node p = makeNode(x);
	if (isEmpty(r))r = p;
	else {
		if (r->data == x)
			throw "\n  Node exist ";
		else if (x < r->data)
			insert(r->left, x);
		else
			insert(r->right, x);
	}
	return 1;
}
void create(BST& r) {
	typeinfo x;
	do
	{
		cout << "Enter number of tree: "; cin >> x;
		if (x == 0)break;
		try
		{
			insert(r, x);
		}
		catch (const char* s)
		{
			cout << s;
		}
	} while (true);
}
void LNR(BST r) {
	if (r) {
		LNR(r->left);
		cout << r->data << "  ";
		LNR(r->right);
	}
}
void LRN(BST r) {
	if (r) {
		LRN(r->left);
		LRN(r->right);
		cout << r->data << "  ";
	}
}
void NLR(BST r) {
	if (r) {
		cout << r->data << "  ";
		NLR(r->left);
		NLR(r->right);
	}
}
int height(BST r) {
	if (r == NULL)return 0;
	int l = height(r->left);
	int m = height(r->right);
	if (l > m)return l + 1;
	return m + 1;
}
int sumLNR(BST r) {
	int sum = 0;
	if (r) {
		sum += sumLNR(r->left);
		sum += r->data;
		sum += sumLNR(r->right);
	}return sum;
}
int countLNR(BST r) {
	if (r == NULL)
		return 0;
	return countLNR(r->left) + countLNR(r->right) + 1;
}
void level(BST r, int k) {
	if (!r)return;
	if (k == 0)cout << r->data << "  ";
	else {
		level(r->left, k - 1);
		level(r->right, k - 1);
	}
}
void printLevelOrder(BST r) {
	int h = height(r);
	for (int i = 0; i < h; i++) {
		cout << endl;
		level(r, i);
	}
}

int countLeaf(BST r) {
	if (!r)return 0;
	int left = countLeaf(r->left);
	int right = countLeaf(r->right);
	if (!r->left && !r->right)//ghép thêm điều kiện vào để tìm số chẵn,lẻ , bội ước,...... 
		return left + right + 1;
	return left + right;
}
int sum1(BST r) {
	if (!r)return 0;
	int left = sum1(r->left);
	int right = sum1(r->right);
	if ((!r->left && r->right) || (r->left && !r->right))
		return left + right + r->data;
	return left + right;
}

node search(BST r, typeinfo x) {
	if (r) {
		if (r->data == x)return r;
		else if (r->data > x)return search(r->left, x);
		else return search(r->right, x);
	}
	return NULL;
}
node search1(BST r, typeinfo x) {
	while (r)
	{
		if (x == r->data)return r;
		else if (r->data > x)r = r->left;
		else r = r->right;
	}
	return NULL;
}
