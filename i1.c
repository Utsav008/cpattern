//find the cube of given number
#include<stdio.h>

int main()
{
	int no=0,i=0; 
	int ans;
	printf("Enter of the terms:"); //Enter the no to find the cube
	scanf("%d",&no);
		
	for(i=1;i<=no;i++)
	{
		ans=i*i*i;
		printf("Number is : %d and cube of the %d is : %d\n",i,i,ans);
	}
	
	return 0;
} 
