#include <stdio.h>

int main(){

				int x;



				while ((x = getchar()) != EOF){
								if(x == ' ' || x== '\t' || x== '\n')
												printf("\n");
								else putchar(x);


				}
}
