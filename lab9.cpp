#include <cstdio>
#include<iostream>
using namespace std;

int Count = 0;

class Node {
public:
	Node* l;
	Node* r;
	int n;

	Node() {
		n = ++Count;
		cout << "Node number " << Count << " was created" << endl;
	}

	Node(int N) {
		if (N != 0) {

			N--;

			if (N == 0) {
				l = NULL;
				r = NULL;
			}

			Node* left = l = new Node;
			Node* right = r = new Node;
			left->r = right;
			right->l = left;
			left->n = Count;
			right->n = Count;

			left->l = right->r = new Node(N - 1);
		}
	}
	~Node() {
		cout << "Node number " << Count << " was deleated" << endl;
	}
};


int main() {
	Node* tree = new Node(6);

	return 0;
}
