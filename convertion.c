  #include<stdio.h>
  #include<string.h>
  #define max 100
  struct stack{
    char info[max];
    int top;
  };
  typedef struct stack stk;
  void push(stk*,char);
  char pop(stk*);
  void infix_postfix(char[],char[]);
  int isoperator(char);
  int precedence(char);
  void main(){
    char infix[max],postfix[max];
    printf("Enter Infix Expression:");
    scanf("%s",infix);
    infix_postfix(infix,postfix);
    printf(" Postfix Expression: %s",postfix);
  }
void infix_postfix(char a[],char b[]){
    stk s;
    s.top=-1;
    char x;
    int i,j,l;
    i=j=0;
    push(&s,'(');
    l=strlen(a);
    a[l]=')';
    a[l + 1] = '\0';
    while(s.top!=-1){
        if(a[i]=='(')
        push(&s,a[i]);
        else if(isoperator(a[i])){
            while(precedence(s.info[s.top])>=precedence(a[i])){
                b[j++]=pop(&s);
            }
            push(&s,a[i]);
        }
       else if(a[i]==')'){
            while((x=pop(&s))!='('){
                b[j++]=x;
            }
        }
        else b[j++]=a[i];
        i++;
    }
    a[i]='\0';
    b[j]='\0';
}

int isoperator(char x){
    return(x=='+'||x=='-'||x=='*'||x=='/'||x=='$');
}

int precedence(char x){
    switch(x){
        case '*':
        case '/':
        return 2;
        case '+':
        case '-':
        return 1;
        case '$':
        return 3;
        default :
        return 0;
    }
}

void push(stk *s,char x){
    if(s->top==max-1)
    return;
    s->info[++s->top]=x;
}

char pop(stk *s){
    if(s->top==-1){
        return '\0';
    }
   return s->info[s->top--];
}