#include<stdio.h>
int main(){
 int n,i,f=1;
 printf("enter a number:");
 scanf("%d", &n);
 if(n<=1){ 
    f=0;
 }
 else{
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            f=0;
            break;
        }
    }
 }
 if(f){
    printf("%d is a prime number",n);
 }
 else{
    printf("%d is not a prime number", n);
 }
 return 0;
}