#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
	int data;
	struct node* next;
};

void reverse(struct node** head_ref) 
{
	struct node* prev = NULL;
	struct node* current = *head_ref;
	struct node* next = NULL;
	
	while (current!=NULL)
	{
		next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
	}
    *head_ref = prev;
}

/*UTILITY FUNCTIONS*/
/* Push a node to linked list. Note that this function
  changes the head */
void push(struct node** head_ref, char new_data)
{
    /* allocate node */
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
    /* put in the data  */
    new_node->data  = new_data;
    /* link the old list off the new node */
    new_node->next = (*head_ref);   
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
} 

/* Function to print linked list */
void printList(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);    
        temp = temp->next;  
    }
}    

int main() {
    
    /* Start with the empty list */
     struct node* head = NULL;
     push(&head, 20);
     push(&head, 4);
     push(&head, 15); 
     push(&head, 85);      
     printList(head);    
     reverse(&head);                      
     printf("\n Reversed Linked list \n");
     printList(head);    
	 return 0;
}