#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 100
  struct stack{
    int info[max];
    int top;
  };
  typedef struct stack stk;
   void push(stk*,int);
   int pop(stk*);
   int evaluate(char[]);
   int is_digit(char);
   int eval(char,int,int);
   int main(){
    char postfix[max];
    int x;
    printf("Enter Postfix Expression:");
    scanf("%s",postfix);
    x=evaluate(postfix);
    printf("After Evaluation:%d",x);
   }
   int evaluate(char a[max]){
    stk s;
    s.top=-1;
    int i=0;
    while(a[i]!='\0'){
        if(is_digit(a[i])){
            push(&s,a[i]-'0');
        }
        else{
            push(&s,eval(a[i],pop(&s),pop(&s)));
        }
        i++;
    }
    return(pop(&s));
   }
   int is_digit(char y){
    return y>='0'&& y<='9';
   }
   int eval(char op,int a,int b){
    switch(op){
        case '+': return(a+b);
        case '-': return(a-b);
        case '*': return(a*b);
        case '/': return(a/b);
        case '$': return (pow (a,b));
    }
   }
   void push(stk *s,int x){
    if(s->top==max-1)
    return;
    s->info[++s->top]=x;
   }
   int pop(stk *s){
    if(s->top==-1)
    return(s->info[s->top--]);
   }