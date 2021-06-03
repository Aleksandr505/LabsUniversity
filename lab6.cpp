#include <cstdio>
#include<iostream>
using namespace std;

int Count = 0;

struct Node {
	Node* l;
	Node* r;
	int n;
};


Node* add_node(int N)
{
	if (N == 0) return NULL;

	Node* p;
	p = new Node;
	p->n = ++Count;
	N--;

	if (N == 0) {
		p->l = NULL;
		p->r = NULL;
	}

	Node* left = p->l = new Node;
	Node* right = p->r = new Node;
	left->r = right;
	right->l = left;
	left->n = ++Count;
	right->n = ++Count;

	left->l = right->r = add_node(N - 1);

	return p;
}

void show() {
	int j = 1;
	printf("  %d\n", j);
	j++;

	for (int i = 0; i < Count; i++) {
		if (j == 6) {
			j = 1;
			printf("  ");
		}

		if (j % 2 == 0) {
			printf("%d   ", j);

		}
		else {
			printf("%d\n", j);
		}

		j++;


	}
}


int main() {
	Node* tree = add_node(18);

	//cout << Count << endl;

	show();

	return 0;
}
