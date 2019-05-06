#include<stdio.h>
void main(){
int month;
printf("Enter the Month number:\n");
scanf("%d",&month);
if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
printf("The  Month have 31 days");
}
else if(month=9||month==4||month==6||month==11){
printf("The Month has 30 Days");
}
else if(month==2){
printf("This month only has 28 Days");
}
else{
printf("Invalid Input!!!!");}
}
