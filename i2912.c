#include<stdio.h>

void main()
{
		int no=0,i=0,j=0,k=0;
	
	printf("Enter the value :");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(i%2!=0)
		{
			for(j=no;j>=i;j--)
			{
				printf("  ");	
			}	
			for(k=1;k<=i;k++)
			{
				printf("  %d ",k);
			}
			printf("\n");
		}
	}
	return 0;
}
