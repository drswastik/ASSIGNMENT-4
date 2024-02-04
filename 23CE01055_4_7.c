#include<stdio.h>
int main(){
    int a,b;
    printf("Welcome To Theme Park!!\nKindly Enter Your Age:");
    scanf("%d",&a);
    switch(a<5){
        case 1:
        printf("Ticket is Free");
        break;
    }switch((a>=5)&&(a<=12)){
        case 1:
        printf("Ticket Price On Child Rate is Rs 20");
        break;}
    switch((a>=13)&&(a<=59)){
        case 1:
        printf("Ticket Price On Standard Rate Is Rs 50 ");
        break;}
switch(a>=60){
    case 1:
    
    printf("Ticket Price Is After Discount For Senior Citizens Is %.0f",50-0.2*50);
    break;
}
return 0;
}