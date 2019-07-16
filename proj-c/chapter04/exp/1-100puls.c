/*
显示1-100的和
*/
#include<stdio.h>
int main(void)
{
	int sum = 0;
	int i = 1;

	do{
		sum += i;
		i++; 
	}while(i <= 100);


	return 0;
}