#include<stdio.h>

int main(){
	
	int num=0,i,j,k;
	printf("value");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		for(j=num;j<i;j--)
		{
			printf(" ");
			
			
		}
		for(k=i;k<num;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
