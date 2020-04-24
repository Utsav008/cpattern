 #include<stdio.h>
 
 int main()
 {
 	int no=0,i=0,k=0;
 	
    printf("Enter the value:");
    scanf("%d",&no);
    
    for(i=1;i<=no;i++)
    {
    	for(k=no;k>=i;k--)
    	{
    		printf("*");
    	}
    	printf("\n");
    }
    return 0;
 }
