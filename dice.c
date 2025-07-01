#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand((unsigned int)time(NULL));

int num1=rand()%6+1;
int num2=rand()%6+1;
int total=num1+num2;

printf("Rolling dice...\n");
printf("Die1:%d\n",num1);
printf("Die2:%d\n",num2);
printf("Total value:%d\n",total);
}