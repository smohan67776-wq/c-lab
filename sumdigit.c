#include<stdio.h>

intmain(){
	int num, sum=0;
	
	printf("Enter a 5-digit number:");
	scanf("%d", &num);
	
	
	if (num < 10000 || num > 99999){
		printf("invaild input! pleace enter a 5-digit number.\n");
		return 1;
	}
    
    while (num >0){
    	int digit =num%10;
    	sum +=digit;
    	num /= 10;
	}
	
	printf("sum of digit: %d\n",sum);
}
