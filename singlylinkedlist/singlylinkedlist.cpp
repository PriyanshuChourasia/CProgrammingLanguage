#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void printList(Node*n){
	while(n!=NULL){
		cout << n->data << "--->";
		n = n->next;
	}
}

void insertatfront(Node**head, int val){
	Node* newNode = new Node();
	newNode->data = val;
	newNode->next = *head;
	*head = newNode;
}


int main()
{
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();
	
	head->data = 23;
	head->next = second;
	second->data = 24;
	second->next = third;
	third->data = 25;
	third->next = NULL;
	
	insertatfront(&head,56);
	insertatfront(&head,58);
	printList(head);
	
	return 0;
}
