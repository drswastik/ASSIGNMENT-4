#include<stdio.h>
int main(){
    int a,b;
    float i;
    printf("Enter the credit card balance:");
    scanf("%d",&a);
    printf("Enter the credit score:");
    scanf("%d",&b);
    switch(b<600){
        case 1:
        i=15.0;
        printf("The interest rate is 15 percent\n");
        printf("The calculated interest is %.2f",(a*i)/100);
        break;}
    switch((b>=600)&&(b<750)){
        case 1:
        i=12.0;
        printf("The interest rate is 12 percent\n");
        printf("The calculated interest is %.2f",(a*i)/100);
        break;}
    switch(b>750){
        case 1:
        i=10.0;
        printf("The interest rate is 10 percent\n");
        printf("The calculated interest is %.2f",(a*i)/100);
        break;
    }

return 0;
    }
