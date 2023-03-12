#include<stdio.h>
int main(){
	
    char r='A';
    char c='E', s;
    
    for(r='A'; r<='E'; r++){
    	for(s='E'; s>r; s--){
    		printf(" ");
    		
		}
    	
    	for(c=r; c>='A'; c--){
    		printf("%c",c);
    		
		}
		printf("\n");
	}
	
	
	
}
