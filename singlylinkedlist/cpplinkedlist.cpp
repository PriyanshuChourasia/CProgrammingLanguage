#include<iostream>
using namespace std;

/**
	Cpp linked list
*/

class Node{
	public:
		int data;
		Node *next;
	
	Node(int value){
		data = value;
		next = NULL;
	};
};

class LinkedList{
	Node *head;
	
	public:
		LinkedList(){
			head = NULL;
		}
		
		void insertatbegining(int data){
			Node *newNode = new Node(data);
			newNode->next = this->head;
			this->head = newNode;
		}
		
		void printList(){
			Node *temp = head;
			
			if(head == NULL){
				cout<<"List is empty"<<endl;
				return;
			}
			
			while(temp != NULL){
				cout<<temp->data<<"--->";
				temp = temp->next;
			}
		}
};

int main(){
	
	LinkedList ll;
	
	ll.insertatbegining(45);
	ll.insertatbegining(56);
	ll.insertatbegining(21);
	
	ll.printList();
	
	return 0;
}
