#include <stdio.h>
#include<stdlib.h>
struct node
   {
     int data;
     struct node *prelink;
     struct node *nextlink;
   }*first;
void display();
void create(int);
void insertb();
struct node* read();
void main()
{
   int n;
   printf("Enter the number of nodes to be created:");
   scanf("%d",&n);
   create(n);
   printf("\n DATA IN THE LIST");
   display();
   printf("\n enter node in beginning");
   insertb();
   printf("\n DATA IN THE LIST");
   display();
}
void create(int n)
  {
      int i;
      struct node *new,*temp;
      first=read();
      temp=first;
      for(i=1;i<n;i++)
         {
             new=read();
             new->prelink=temp;
             temp->nextlink=new;
             temp=temp->nextlink;
         }
  }
struct node * read()
  {
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter the Data:");
     scanf("%d",&newnode->data);
     newnode->nextlink=NULL;
     return newnode;
  }
  void insertb()
  {
    struct node *new;
    new=read();
    new->nextlink=first;
    first->prelink=new;
    first=new;
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
        temp=temp->nextlink;
     }
   }