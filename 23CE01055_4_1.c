#include<stdio.h>
int main(){
    int a,ch;
    printf("Enter a number:");
    scanf("%d",&a);
    ch=a%2;
    switch(ch){
        case 0:
        printf("Entered Number Is Even");
        break;
        case 1:
        printf("Entered Number Is Odd");
        break;
        return 0;

    }

}