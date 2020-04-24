//multiplication table
#include <stdio.h>

int main()
{
	int no=0,i=0,ans=0;
	
	printf("Input the number (Table to be calculated) :");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		printf("%d * %d = %d\n",no,i,ans);
	}
	
	return 0;
}
