#include<stdio.h>

int main()
{
	int i=0,j=0,no=0,k=0;
	
	printf("Enter the Number:");
	scanf("%d",&no);
	
	for(i=no;i>=1;i--)
	{
		k=k+1;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
