 #include<stdio.h>
 
 int main()
 {
 	int no=0,i=0,j=0;
 	char str[2];
 	
 	printf("Enter the value(A-Z,a-z):");
 	scanf("%c",str);
 	//printf("%d",str[0]);
 	
 	str[1]=65;
 	str[2]=97;
 	 	
 	if(str[0]>=65 && str[0]<=90)
 	{
 		for(j=65;j<=str[0];j++)
 		{
  			for(i=65;i<=str[0];i++)
 			{
 				printf("%c",str[1]);
 				str[1]=str[1]+1;
 			}
 			for(i=str[0];i>=65;i--)
 			{
 			   	str[1]=str[1]-1;
 				printf("%c",str[1]);
  			}
  		  str[1]=str[1]-1;
  		  printf("\n");	
  		}
 	}
 	else if(str[0]>=97 && str[0]<=122)
 	{
 		for(j=97;j<=str[0];j++)
 		{
  			for(i=97;i<=str[0];i++)
 			{
 				printf("%c",str[2]);
 				str[2]=str[2]+1;
 			}
 			for(i=str[0];i>=97;i--)
 			{
 			   	str[2]=str[2]-1;
 				printf("%c",str[2]);
  			}
  		  str[2]=str[2]-1;
  		  printf("\n");	
  		}
 	}
 	else
 	{
 		printf("Enter Valid Input.");
 	}
 	return 0;
 }
