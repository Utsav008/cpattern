 #include <stdio.h>
 
 int main()
 {
 	int no=0,i=0,j=0,k=0;
 	
 	printf("Enter the value:");
 	scanf("%d",&no);
 	
 	for(i=1;i<=no;i++)
 	{
 		for(k=1;k<=i;k++)
 		{
 			printf(" ");
 		}
 		for(j=no;j>=i;j--)
 		{
 			printf("*");
 		}
 		printf("\n");
 	}
 	return 0;
 }
