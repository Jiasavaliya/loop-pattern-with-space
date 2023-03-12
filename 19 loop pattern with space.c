 #include<stdio.h> 
int main()
{
	int r,c, s;
	for(r=1;r<=5;r++)
	{
		for(s=1; s<=r; s++){
			printf(" ");
		}
		
		for(c=r;c<=5;c++)
		{
			if(c%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
 }    	      
