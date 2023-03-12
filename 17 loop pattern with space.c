//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1

#include<stdio.h>
int main(){
	
	int r, c, s;
	
	for(r=1; r<=5; r++){
		for(s=4; s>=r; s--){
			printf(" ");
		}
		for(c=1; c<=r; c++){
		
			if(c%2==0){
				printf("0",r);
			}
			else{
				printf("1",c);
			}
		}
		printf("\n");
	}
	return 0;
}

