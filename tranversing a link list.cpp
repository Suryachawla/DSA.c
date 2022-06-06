#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;          // Data 
    struct node *next; // Address 
}*head;
void createList(int n);
void traverseList();
int main()
{
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    traverseList();
    return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
   head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}
void traverseList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
