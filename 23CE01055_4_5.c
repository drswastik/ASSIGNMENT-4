#include<stdio.h>
int main(){
    int a,b=0,digits=0,i;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    i=3;
    int org=a;
while(i>0){
    digits=a%10;
    i=i-1;
    b+=digits*digits*digits;
    a=a/10;}
switch(org==b){
    case 1:
    printf("The entered number is an armstrong number");
    break;
    case 0:
    printf("The entered number is not an armstrong number");
    break;
}
return 0;
}