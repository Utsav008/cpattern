#include<stdio.h>

int main()
{
	int no=0,i=0,j=0,k=0,l=0;
	
	printf("Enter the value :");
	scanf("%d",&no);
	
	for(i=0;i<=no;i++)
	{
		for(l=no;l>=i;l--)
		{
			printf(" ");
		}
		if(i>0)
		{
			for(j=i;j>0;j--)
			{
				printf("%d",j);
			}	
		}
		printf("0");
		if(i>0)
		{
			for(k=1;k<=i;k++)
			{
				printf("%d",k);
			}	
		}
	
		printf("\n");
	}
	return 0;
}
