#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two integers :");
    scanf("%d%d",&a,&b);
    printf("The following operations are available in the calculator:\n");
    printf("1--->Addition\n2--->Multiplication\n3--->Subtration\n4--->Division\nEnter your choice:");
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("%d+%d=%d",a,b,a+b);
        break;
        case 2:
        printf("%d*%d=%d",a,b,a*b);
        break;
        case 3:
        printf("%d-%d=%d",a,b,a-b);
        break;
        case 4:
        printf("%d/%d=%d",a,b,a/b);
        break;
        default:
        printf("Invalid Choice!!");
        break;
    }
    return 0;
}