#include<stdio.h>
#define max 6
struct stack{
    int info[max];
    int top;
};
typedef struct stack stk;
void push(stk* , int);
void pop(stk*);
int main(){
  stk s;
  s.top=0;
    int AAA=2;
    int BBB=5;

    push(&s, AAA);
    push(&s, 4);
    push(&s,BBB+2);
    push(&s,9);
    push(&s,AAA+BBB);

    printf("Deleted data:");
    while(s.top!=0){
    pop(&s);
    }

}
void push(stk *s, int item)
{
    if(s->top==max){
        printf("Stack Overflowed");
        return;
    }
    s->info[++s->top]=item;
}
void pop(stk *s)
{
    if(s->top==0){
        printf("Stack Underflowed");
        return;
    }
    
     printf("%d\t",s->info[s->top--]);

}
