 #include<stdio.h>
 
 int main()
 {
 	int no=0,i=0,j=0;
 	
 	printf("Enter the value:");
 	scanf("%d",&no);
 	
 	
 	for(i=1;i<=no;i++)
 	{
 		for(j=1;j<=i;j++)
		 {
		 	if(i==1)
		 	{
		 		printf("   %d ",j);
		 	}
		 	else if(j==no)
		 	{
		 		printf("%d ",j);
		 	}
		 	else
		 	{
		 		 printf(" %d ",j);
		 	}
		 }
		 printf("\n");	
 	}
 	
 	return 0;
 }
