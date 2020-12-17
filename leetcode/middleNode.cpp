#include <iostream>
using namespace std;

class Node {
	public:
		int val;
		Node* next;

		Node(int x, Node* n) {
			val = x;
			next = n;
		}

		Node(int a) {
			val = a;
			next = NULL;
		}
};

void display(Node* root) {
	if(!root) {
		cout << "Empty list" << endl;
	}
	
	while(root != NULL) {
		cout << root->val << " ";
		root = root->next;
	}
	cout << endl;
}

Node* middleNode(Node* head) {
	Node* slow = head;
	Node* fast = head;

	while(fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow;
}

int main() {

	Node* l1 = new Node(1, new Node(2));

	Node* a = middleNode(l1);
	cout << a->val << endl;
	return 0;
}
