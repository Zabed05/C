
         //TAKING NUMBERS UNTIL THE NUMBER BE A ODD NUMBER
         
#include<stdio.h>
int main(){
  int n;
  do{
  printf("enter your number:");
  scanf("%d",&n);
  if(n%2!=0){
    break;
  }
  }
  while(1);
  printf("THANK YOU!");
  return 0;
}

             //NUMBER PRIME OR NOT 
             
#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int i=2;
    while(i<x){
        if(x%i==0){
            printf("not prime");
            break;
        }
        i++;
    }
    if(i==x){
        printf("Prime");
    }

    return 0;
}
             

             // AREA CALCULATION OF SQUARE,CIRCLE,RECTENGULAR

#include<stdio.h>
 #include<math.h>
 float sa(float side);
 float ca(float rad);
 float ra(float a, float b);

int main(){
int side,rad,a,b;
printf("Enter side of the square:");
scanf("%f",&side);
printf("Enter the radius of the circle:");
scanf("%d",&rad);
printf("Enter the length: \n""Enter the wideth: \n");
scanf("%d %d",&a,&b);
printf("The area of square is: %f\n", sa(side));
printf("the area of circle is: %f\n", ca(rad));
printf("the area of rectengular: %f\n", ra(a,b));
    return 0;
}

 float sa(float side){
    return side * side;
 }
 float ca(float rad){
    return 3.14*rad*rad;
 }
 float ra(float a, float b){
    return a*b;
 }

      //Enter Address(House no,block no,city,state)of 5 people

#include<stdio.h>
#include<string.h>
struct address{
    int houseno;
    int blockno;
    char city[500];
    char state[500];
};
int main(){
    struct address add[5];
for(int i=0;i<5;i++){
    printf("Adress %d\n",i+1);
printf("Enter Your House No:");
scanf("%d",&add[i].houseno);
printf("Enter your block no:");
scanf("%d",&add[i].blockno);
printf("Enter your city name:");
scanf("%s",add[i].city);
printf("Enter your state:");
scanf("%s",add[i].state);   
}
printf("\n");
for(int i=0;i<5;i++){
    printf("Information Of Address: %d\n",i+1);
printf("House No:%d\n",add[i].houseno);
printf("Block No:%d\n",add[i].blockno);
printf("City Name:%s\n",add[i].city);
printf("State Name:%s\n",add[i].state);
}
return 0;
}

                         //TABLE OF ANY NUMBER

#include<stdio.h>
int main(){
   int m,n,i;
   printf("enter the number:");
   scanf("%d",&n);
   for(i=1;i<=10;i++){
    m=n*i;
   
   printf("%d * %d : %d\n",n,i,m);
   }
    return 0;
}

     //STRUCTURE
     
#include<stdio.h>
#include<string.h>
struct student
{
char name[100];
int roll;
float cgpa;
};
typedef struct student std; 
int main(){
 int n,i;
 printf("Enter Total Number Of Student:");
 scanf("%d",&n);
 std s[n];
 for(i=0;i<n;i++){
    printf("enter the name:");
    scanf("%s",&s[i].name);
    printf("Enter the Roll:");
    scanf("%d",&s[i].roll);
    printf("Enter The CGPA:");
    scanf("%f",&s[i].cgpa);
 }
 for(i=0;i<n;i++){
    printf("Name:%s\n",s[i].name);
    printf("Roll:%d\n",s[i].roll);
    printf("Cgpa:%f\n",s[i].cgpa);
 }
    return 0;
}

//Define an array and store data

#include<stdio.h>
int main()
{
    int i,n;
    
    printf("Enter Your Array Size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Your Array Elements:");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    printf("Your Data:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

//call by value and call by address

#include<stdio.h>
int value(int num);
void address(int *num);
 
int main()
{
int a=5, b=6;
printf("Before:a=%d\t",a);
int result=value(a);
printf("after:a=%d \t result:%d",a,result);

printf("\n");
printf("before:b=%d\t",b);
address(&b);
printf("Result:%d",b);
return 0;
}

int value(int num){
    num= num+1;
    return num;
}
void address(int *num){
     *num= *num + 1;
}

//Store information of student and search by roll number

#include<stdio.h>
#include<string.h>
struct student
{
char name[100];
int roll;
float cgpa;
};
void search(struct student s[],int n,int roll);

typedef struct student std; 
int main(){
 int n,i,roll;
 printf("Enter Total Number Of Student:");
 scanf("%d",&n);
 std s[n];
 for(i=0;i<n;i++){
    printf("Enter the name:");
    scanf("%s",&s[i].name);
    printf("Enter the Roll:");
    scanf("%d",&s[i].roll);
    printf("Enter The CGPA:");
    scanf("%f",&s[i].cgpa);
 }
 /*for(i=0;i<n;i++){
    printf("Name:%s\n",s[i].name);
    printf("Roll:%d\n",s[i].roll);
    printf("Cgpa:%f\n",s[i].cgpa);
 }*/

 printf("Enter Roll no to search:");
 scanf("%d",&roll);
 search(s,n,roll);
    return 0;
}

void search(struct student s[],int n,int roll){
    int found=0;
    for(int i=0;i<n;i++){
        if(s[i].roll==roll){
            printf("information Founded\n");
            printf("Name:%s\n",s[i].name);
            printf("Roll:%d\n",s[i].roll);
            printf("Cgpa:%f\n",s[i].cgpa);
            found=1;
            break;
        }
    }
    if(!found){
        printf("Not Founded!!");
    }
}

// Create multiple block

#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
typedef struct node nd;
int main(){
    nd *start,*temp,*current ;
    int i=1;
    start=NULL;
    while(i){
        temp=(nd*)malloc(sizeof(nd));
        printf("Enter Data:");
        scanf("%d",&temp->info);
        if(!start){
            start=temp;
        }
        else{
            current->next =temp;
        }
        current=temp;
        printf("Want to continue press 1 or 0:");
        scanf("%d",&i);
    }
    current->next =NULL;
    temp=start;
    while (temp)
    {
    printf("%d \t",temp->info);
    temp=temp->next;
    }
}