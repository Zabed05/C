#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct record
{
   int id;
   char name[500];
};
typedef struct record rd;
struct node
{
  rd info;
  struct node *next;
};
typedef struct node nd;

void insert_begin(nd**,rd);
void insert_end(nd** , rd);
void insert_before(nd** ,int);
void delete(nd**,int);
void traverse(nd*);

void main()
{
   nd *start;
   rd rec;

int i=1,x;
start=NULL;
while(i){
   printf("1:Insert a node at the begining");
   printf("\n2:Insert a node at the end");
   printf("\n3:Insert a node before a particular node");
   printf("\n4:Insert a node after a particular node");
   printf("\n5:Delete a particular node");
   printf("\n8:Traverse The Whole Lined List");
   printf("\n Enter Your choice:");
   scanf("%d",&i);
   switch(i)
   {
    case 1: 
    printf("Enter Id:");
    scanf("%d",&rec.id);
    printf("enter Name:");
    scanf("%s",&rec.name);
    insert_begin(&start, rec);
    break;
    case 2: 
    printf("Enter id:");
    scanf("%d",&rec.id);
    printf("Enter Name:");
    scanf("%s",&rec.name);
    insert_end(&start,rec);
    break;
    case 3:
    printf("Enter Node's id:");
    scanf("%d",&x);
    insert_before(&start,x);
    break;
    case 5:
    printf("Enter Node's id:");
    scanf("%d",&x);
    delete(&start,x);
    break;
    case 8: 
    traverse(start);
    break;
   }
}
}
// Function Define
//Insert a node at the begining
void insert_begin(nd **ptr, rd item)
{
   nd *temp;
   temp=(nd*)malloc(sizeof (nd));
   if(!temp){
      printf("Insufficient Memory");
      return;
   }
   temp->info=item;
   temp->next= *ptr;
   *ptr=temp;
}
//Insert a node at the end
void insert_end(nd **ptr, rd item)
{
   nd *temp,*current;
   temp=(nd*)malloc(sizeof(nd));
   if(!temp){
      printf("Insufficient Memory");
      return;
   }
   temp->info=item;
   temp->next=NULL;
   if(!*ptr){
      *ptr=temp;
      return;
   }
   current=*ptr;
   while(current->next){
      current=current->next;
   }
   current->next=temp;
}
//insert a node before a particular node
void insert_before(nd **ptr ,int item)
{
   nd *temp,*current,*prev;
   current=prev=*ptr;
   while(current){
      if(current->info.id==item){
         break;
      }
      prev=current;
      current=current->next;
   }
   if(!current){
      printf("Data not found");
      return;
   }
   temp=(nd*)malloc(sizeof(nd));
   if(!temp){
      printf("Insufficient Memory");
      return;
   }
   printf("Enter Id and Name:");
   scanf("%d %s",&temp->info.id,&temp->info.name);
   temp->next=current;
   if(prev==current){
      *ptr=temp;
   }else{
      prev->next=temp;
   }
   current->next=temp;
}
//Delete a particular node
void delete(nd** ptr,int item){
   nd *current, *prev;
   current=prev=*ptr;
   while(current){
      if(current->info.id=item)
      break;
      prev=current;
      current=current->next;
      printf("Deleted elements:%d \t %s",ptr->info.id,ptr->info.name);
   }
}
//Traverse The Lined list
void traverse(nd *ptr){
   if(!ptr){
      printf("Linkedlist is Empty");
      return;
   }
   while(ptr){
      printf("Id:%d \t Name:%s",ptr->info.id,ptr->info.name);
      printf("\n");
      ptr=ptr->next;
   }
}