#include <iostream>
using namespace std;

struct Node {
	int data;
	int pos;
	Node* next;
};
typedef struct Node* node;

node makeNode(int x, int pos) {
	node temp = new Node();
	temp->data = x;
	temp->pos = pos;
	temp->next = NULL;
	return temp;
}

void insertFirst(node& a, int pos) {
	int x;
	cin >> x;
	if (x != 0) {
		node temp = makeNode(x, pos);
		if (a == NULL) 
			a = temp;
		else {
			temp->next = a;
			a = temp;
		}
	}
}

void set(node& a, int& n) {
	cout << "Nhap bac cua da thuc: ";
	cin >> n;
	while (n < 0) {
		cout << "Vui long nhap lai bac cua pt: ";
		cin >> n;
	}
	for (int i = 0; i <= n; i++) {
		cout << "Nhap he so cua bac x" << i << ": ";
		insertFirst(a, i);
	}

}

void print(node a, int n) {
	while(a->next != NULL) {
		if (a->data != 1) 
			cout << a->data;
		cout << "x^" << a->pos;
		a = a->next;
		if (a->data > 0) cout << " + ";
	}
	if(a->data != 1)
		cout << a->data;
	if (a->pos != 0) cout << "x^" << a->pos;
	else cout << a->data;
}

int main() {
	node fx = NULL;
	int n1, n2;
	node gx = NULL;
	set(fx, n1);
	set(gx, n2);

	cout << "fx = ";
	print(fx, n1);
	cout << endl;
	cout << "gx = ";
	print(gx, n2);
}
