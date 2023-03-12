//A B C D E
//A B C D
//A B C
//A B
//A
#include<stdio.h>
int main(){
	
    char r='A';
    char c='E', s;
    
    for(r='E'; r>='A'; r--){
    	for(s=r; s<'E'; s++){
    		printf(" ");
    		
		}
    	
    	for(c='A'; c<=r; c++){
    		printf("%c",c);
    		
		}
		printf("\n");
	}
	
	
	
}
