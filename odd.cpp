include <stdio.h>

int main(){
int n,i;
//prompt the user for input 
printf ("Enter a positive integer: ");
scanf("%d",&n);

//validate input 
if (n<=0){
printf("please enter a positive integer greather then 0.\n");
return 1;
}
printf("\nodd number from 1 to %d are:\n");

//Loop to print odd numbers
for(i=1;i<=n;i+=2){
printf("%d",i);
}
printf("\n");
return 0;
}
