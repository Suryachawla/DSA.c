#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define NULL 0
typedef struct nodetype
{
int info;
struct nodetype *link;
}node;
int main ()
{
/*
declaring function used in this program */
node* create ();
void traverse (node*) ;
void destroylist (node*) ;
void dup_remove (node*) ;
node *head;

head=create () ;
/* creating linked list */
printf ("Sorted linked list with duplicate info values\n");
traverse (head) ;
/*
calling function that delete nodes with duplicate info valses
*/

dup_remove (head);
printf("\n sorted list after deleting node with dublicate info variable");
traverse(head);
/*Destroying linked list */
destroylist (head) ;
getch () ;
}
node* create ()
{
node *ptr, *head=NULL;
int data;
char ch='y';
while (ch=='y' || ch == 'Y')
{
if (head==-NULL)
{
head=(node*) malloc(sizeof (node)) ;
ptr=head;
}
else
{
ptr->link= (node*) malloc(sizeof (node)) ;
ptr=ptr->link;
}
printf ("Enter info of new node : ");
scanf ("%d" , &data) ;
ptr->info=data;
fflush (stdin);
printf ("Want to continue: (Y or N) =");
scanf("%c" , &ch) ;
ptr->link=NULL;
return (head) ;
}
}
/* Function to traverse the list */
 Voidtraverse (node *head)
{

node* ptr=head;
while (ptr!=NULL)
{
printf("\nInfo of node is \t:%d", ptr->info) ;
ptr=ptr->link;
}
return 0; optional/
}
/* Function that delete all node of the linked list
with duplicate info values*/
void dup_remove (node *head)
{
node *ptr, *nextnext;
ptr=head; /*ptr points to first node */
/* ptr keeps track of current node */
if (ptr==NULL) return; /*do nothing if list empty */
/*compare current node with next node */
while ( ptr->link!=NULL)
{
if (ptr->info = ptr->link->info) /comparing adjacent nodes/
{
nextnext=ptr->link->link;
free (ptr->link); /release memory for successor of current/
ptr->link-nextnext;
}
else
{
ptr-ptr->link; /* advance to next node */
}
}
}
void destroylist (node *start)
{
node* ptr=start;
while (ptr!=NULL)
{
ptr=ptr->link;
free (start);
start=ptr;
}
}
