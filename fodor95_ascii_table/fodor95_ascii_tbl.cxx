#include <stdio.h>

int main(){
	
	printf("Printable characters of ASCII table\n");
	for(int i = 33; i <= 126; i++){
		printf("%d ", i);
		printf("%c \t", i);
	}
	printf("\n-----------------\n");
	
	printf("Whole ASCII table\n");
	for(int i = 0; i <= 126; i++){
		printf("%d ", i);
		printf("%c \t", i);
	}
	
	
	printf("\nwww.fodor95.com");

}
