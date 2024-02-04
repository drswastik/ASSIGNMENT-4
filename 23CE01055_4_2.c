#include<stdio.h>
int main(){
    int a,b,c,ch;
    printf("Enter Three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    ch=(a>b)&&(a>c);
    switch(ch){
        case 1:
        printf("%d is the largest number",a);
        break;
        case 0:
         switch(b>c){
            case 1:
            printf("%d is the largest number",b);
            break;
            case 0:
            printf("%d is the largest number",c);
            break;}
        break;}
    return 0;
}