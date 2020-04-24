 #include<stdio.h>
 
 int main()
 {
 	int no=0,i=0,a=0,j=0;
 	
 	printf("Entre the Value:");
 	scanf("%d",&no);
 	
 	if(no%2==0)
 	{
 		a=no/2;
 		for(i=1;i<=no;i++)
 		{
 			if(i<=a)
 			{
 				for(j=1;j<=no;j++)
 				{
 					printf(" * ");
 				}
 				printf("\n");
 			}
 			else
 			{
 				for(j=1;j<=no;j++)
 				{
 					printf("*");
 				}
 				printf("\n");
 			}
 		}
 	}
 	else
 	{
 		a=(no-1)/2;
		for(i=1;i<=no;i++)
 		{
 			if(i<=a)
 			{
 				for(j=1;j<=no;j++)
 				{
 					printf(" * ");
 				}
 				printf("\n");
 			}
 			else
 			{
 				for(j=1;j<=no;j++)
 				{
 					printf("*");
 				}
 				printf("\n");
 			}
 		} 		
 	}
 	return 0;
 }
