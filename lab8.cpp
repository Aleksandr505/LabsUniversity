#include <cstring>
#include <cstdio>
#include<iostream>
using namespace std;

int Count = 0;

class Node {
public:
	Node* l;
	Node* r;
	int n;
};


Node *add_node(int N)
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


int main() {
	Node* tree = add_node(6);

	cout << tree->l->l->r->n << endl;

	return 0;
}
