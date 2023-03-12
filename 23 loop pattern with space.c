//|
//| -
//| - |
//| - | -
//| - | - |

#include<stdio.h> 
int main()
{
	int r,c, s;
	for(r=5;r>=1;r--)
	{
		for(s=r; s>=4; s--){
			printf(" ");
		}
		
		for(c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf("-");
			}
			else
			{
				printf("/");
			}
		}
		printf("\n");
	}
 }    	      
