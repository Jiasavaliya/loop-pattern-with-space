#include<stdio.h>
int main(){
	int r, s, c;
	
	for(r=5; r>=1; r--){
			for(s=5; s>r; s--){
			printf(" ");
		}
	
		for(c=r; c>=1; c--){
			printf("*");
		}
		printf("\n");
		
	}
}

