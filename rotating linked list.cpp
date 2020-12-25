#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};

void rotate(Node** head_ref,int k)
{
	if(k==0)
	return;
	Node* current = *head_ref;
	// current is used to traverse the linked list
	int count=1;
	//will keep the count of number of nodes in  the linked list
	//now we will traverse till the end of the linked list
	 //after this loop current will point to the node 40
	 while(count<k&&current!=NULL){
	  current=current->next;
	  count++;
	  
	 }
	 //if current is null simply return as th[en k will be less then k
	if(current==NULL)
	return;
	//now we store the value of current in kth node
	Node* kthNode= current;
	//now we will traverse with current node till the current node reached the end of the  list
	while(current->next!=NULL)
	{
		current=current->next;
	}
	// chnaging the next of current node (last node) to head(10)
	current->next=*head_ref;
	//now next of kth node will be change  to head node
	*head_ref= kthNode->next;
	//next of kth node is canged to null so that bond is broken
	kthNode->next=NULL;

}
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Function to print linked list */
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
 
/* Driver code*/
int main(void)
{
    /* Start with the empty list */
    Node* head = NULL;
 
    // create a list 10->20->30->40->50->60
    for (int i = 60; i > 0; i -= 10)
        push(&head, i);
 
    cout << "Given linked list \n";
    printList(head);
    rotate(&head, 4);
 
    cout << "\nRotated Linked list \n";
    printList(head);
 
    return (0);
}
 
