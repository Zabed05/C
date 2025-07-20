#include<stdio.h>
int main(){
   FILE *ptr ;
   ptr= fopen("zak.txt","r");
  int a;
  fscanf(ptr,"%d",&a);
  int b;
  fscanf(ptr,"%d",&b);

  ptr= fopen("zak.txt","a");
   fprintf(ptr," Sum is:%d",a+b);
    fclose(ptr);

return 0;
}