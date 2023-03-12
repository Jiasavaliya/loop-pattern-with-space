//A
//A B
//A B C
//A B C D
//A B C D E

#include<stdio.h>
int main(){
	
    char r='A';
    char c='E', s;
    
    for(r='A'; r<='E'; r++){
    	for(s='E'; s>r; s--){
    		printf(" ");
    		
		}
    	
    	for(c='A'; c<=r; c++){
    		printf("%c",c);
    		
		}
		printf("\n");
	}
	
	
	
}
