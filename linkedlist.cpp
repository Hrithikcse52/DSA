#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void cp() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct Node {
	int val;
	Node* next;
	Node() {
		this->val = 0;
		this->next = NULL;
	}
	Node(int x) {
		this->val = x;
		this->next = NULL;
	}
};

class Solution {
public:
	void reverseList(Node* &temp) {
		// cout << head->val;
		Node * head = temp;
		Node * dummy = NULL;
		Node * nextNode;
		while (head != NULL) {
			nextNode = head->next;
			head->next = dummy;
			dummy = head;
			head = nextNode;
		}
		temp = dummy;

		// return dummy;
	}

	Node * recursiveReverseList(Node* &head) {
		if (head == NULL || head->next == NULL) {
			return head;
		}
		Node * newNode  = recursiveReverseList(head->next);
		head->next->next = head;
		head->next = NULL;
		return newNode;
	}
	void printList(Node *head) {
		while (head != NULL) {
			cout << head->val << " ";
			head = head->next;
		}
	}
	void pushElem(int val, Node *head) {
		Node * tempNode = new Node(val);
		while (head->next != NULL) {
			head = head->next;
		}
		head->next  = tempNode;
	}
};

void itereate(Node* head) {
	Node * temp = head;
	while (temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
}

void inserAtEnd(Node * &head , int val) {
	Node * n = new Node(val);
	if (head == NULL) {
		head = n;
	}
	Node * temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}
void reverse(Node* &temp) {
	// cout << head->val;
	Node * head = temp;
	Node * dummy = NULL;
	Node * nextNode;
	while (head != NULL) {
		nextNode = head->next;
		head->next = dummy;
		dummy = head;
		head = nextNode;
	}
	temp = dummy;
}

int main() {
	cp();
	Solution obj;
	Node * newNode = new Node(4);
	obj.printList(newNode);
	cout << endl;
	obj.pushElem(5, newNode);
	obj.pushElem(3, newNode);
	inserAtEnd(newNode, 7);
	obj.printList(newNode);
	cout << endl;
	obj.reverseList(newNode);
	obj.printList(newNode);
	cout << endl;
	reverse(newNode);
	itereate(newNode);


	return 0;
}

