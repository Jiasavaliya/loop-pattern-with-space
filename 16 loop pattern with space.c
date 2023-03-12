//A B C D E
//B C D E
//C D E
//D E
//E

#include<stdio.h>
int main(){
	
    char r='A';
    char c='E', s;
    
    for(r='A'; r<='E'; r++){
    	for(s='A'; s<r; s++){
    		printf(" ");
    		
		}
    	
    	for(c=r; c<='E'; c++){
    		printf("%c",c);
    		
		}
		printf("\n");
	}
	
	
	
}
