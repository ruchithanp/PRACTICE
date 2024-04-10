#include <stdio.h>
#include<stdlib.h>
struct node
   {
     int data;
     struct node *next;
   }*first;
void display();
void create(int);
void insertend();
struct node* read();
void main()
{
   int n;
   printf("Enter the number of nodes to be created:");
   scanf("%d",&n);
   create(n);
   printf("\n DATA IN THE LIST");
   display();
   printf("\nadd element at the end\n");
   insertend();
   printf("\nDATA IN THE LIST after adding");
   display();
}
void create(int n)
  {
      int i;
      struct node *newnode,*temp;
      first=read();
      temp=first;
      for(i=1;i<n;i++)
         {
             newnode=read();
             temp->next=newnode;
             temp=temp->next;
         }
  }
struct node * read()
  {
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter the Data:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     return newnode;
  }
  void insertend()
{
    struct node *temp,*temp1;
    temp=read();
    if(first==NULL)
     first=temp;
    else
    {
        temp1=first;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
 
void display()
  {
     struct node *temp=first;
     if(temp==NULL)
     printf("\n LIST IS EMPTY");
     else
     while(temp!=NULL)
     {
        printf("\nData=%d",temp->data);
        temp=temp->next;
     }
   }





























