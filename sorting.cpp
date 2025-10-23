#include<stdio.h>
int main(){
int num,sum=0,digit;
printf("enter a 5-digit number:");
scanf("%d",&num);
//check if number is 5-digit
if (num<10000||num>99999){
printf("enter: please enter a valid 5-digit number.\n");
return 1;//exit with error code
}

//extract and sum digits
for (int i=0;i<5;i++){
digit=num%10; //get last digit
sum +=digit; //add to sum
num/=10;  //remove last digit
}
printf("sum of digits:%d\n",sum);
return 0;
}
