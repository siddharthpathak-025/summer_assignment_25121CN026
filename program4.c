#include<stdio.h>
int main(){
  int n, x, rev=0, digit;
  printf("enter the number :");
  scanf("%d", &n);
  x=n;
  while(n>0){
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
  }
  if(x==rev){
    printf("palendrome number");
  }
  else{
    printf("not a palendrome number");
  }
  return 0;

}