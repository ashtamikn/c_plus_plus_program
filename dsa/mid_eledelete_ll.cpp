#include <stdio.h>


/* Link list Node */
struct Node {
	int data;
	struct Node* next;
};
// count of nodes
int countOfNodes(struct Node* head)
{
	int count = 0;
	while (head != NULL) {
		head = head->next;
		count++;
	}
	return count;
}

// Deletes middle node and returns
// head of the modified list
struct Node* deleteMid(struct Node* head)
{
struct Node* temp;
  struct Node* temp2;
  // Bintase cases
	int count=0,x=countOfNodes(head);
  int mid=x/2;
  temp=head;
  temp2=head->next;
  while(count!=mid)
  {
    temp=temp->next;
    temp2=temp2->next;
    count++;
  }
  
 temp->next=temp2->next;
 return temp2;
}
// A utility function to print
// a given linked list
void printList(struct Node* ptr)
{
	while (ptr != NULL) {
		printf("%d ->", ptr->data);
		ptr = ptr->next;
	}
	printf( "NULL\n");
}

// Utility function to create a new node.
Node* newNode(int data)
{
	struct Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

/* Drier program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(3);
	head->next->next->next = newNode(4);

	printf("Gven Linked List\n");
	printList(head);

	head = deleteMid(head);

printf("Linked List after deletion of middle\n");
	printList(head);

	return 0;
}
