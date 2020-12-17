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

Node* addTwoNums(Node* l1, Node* l2) {
	Node* ans = NULL;
	Node* temp = NULL;
	Node* prev = NULL;
	int carry = 0;
	int sum = 0;

	while(l1 != NULL || l2 != NULL) {
		//l1+l2+carry
		sum = (l1? l1->val : 0) + (l2? l2->val : 0) + carry; 
		//update carry
		carry = sum > 9? 1: 0;
		//update sum
		sum = sum % 10;
		//create new node w/ value
		temp = new Node(sum);

		//list is empty
		if(ans == NULL) {
			ans = temp;
		} else { //add to list
			prev->next = temp;
		}

		prev = temp;

		if(l1)
			l1 = l1->next;
		if(l2)
			l2 = l2->next;
	}

	if(carry > 0)
		prev->next = new Node(1); 


	return ans;
}

int main() {

	Node* l1 = new Node(9, new Node(9));
	Node* l2 = new Node(9, new Node(9, new Node(9)));
	
	Node* a = addTwoNums(l1, l2);
	display(a);
	return 0;
}
