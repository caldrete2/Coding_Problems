#include <iostream>
using namespace std;

int nodeCount = 0;

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int x) {
		data = x;
		left = nullptr;
		right = nullptr;
	}
};

Node* insert(Node* cur, int val) {
	if(cur == NULL) {
		return new Node(val);
		nodeCount++;
	} else if(cur->data < val)
		cur->right = insert(cur->right, val);
	else
		cur->left = insert(cur->left, val);

	return cur;
}

Node* leftMostNode(Node* cur) {
	Node* it = cur;

	while(it && it->left != NULL)
		it = it->left;
	
	return it;
}

Node* deleteNode(Node* cur, int val) {
	if(cur == NULL)
		return cur;

	if(cur->data > val)
		cur->left = deleteNode(cur->left, val);
	else if(cur->data < val)
		cur->right = deleteNode(cur->right, val);
	else {
		Node* temp = nullptr;

		if(cur->right == NULL) {
			temp = cur->left;
			free(cur);
			nodeCount--;
			return temp;
		} else if(cur->left == NULL) {
			temp = cur->right;
			free(cur);
			nodeCount--;
			return temp;
		}

		temp = leftMostNode(cur->right);
		cur->data = temp->data;

		cur->right = deleteNode(cur->right, temp->data);
	}

	return cur;
}

void preOrder(Node* cur) {
	if(cur != NULL)
		cout << cur->data << " ";

	if(cur->left) preOrder(cur->left);
	if(cur->right) preOrder(cur->right);
}

int getSize() {
	return nodeCount;
}

int main() {

	Node* list = nullptr;

	list = insert(list, 5);
	list = insert(list, 3);
	list = insert(list, 7);
	list = insert(list, 6);
	list = insert(list, 8);
	list = insert(list, 4);
	list = insert(list, 2);

	preOrder(list);
	cout << endl;
	
	list = deleteNode(list, 5);
	preOrder(list);
	return 0;
}
