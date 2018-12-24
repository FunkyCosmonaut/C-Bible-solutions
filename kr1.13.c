#include <stdio.h>


#define IN 1
#define OUT 0


int main(){

				int c, nl, nw, nc, state;
				int array[20];
				int i;
				state = OUT;
				nl = nw = nc = 0;
				for(i = 0; i < 20; i++)
								array[i] = 0;
				while((c = getchar()) != EOF){
								++nc;
								if(c == '\n')
												++nl;
								if(c == ' ' || c == '\n' || c == '\t'){
												state = OUT;
												++array[nc-1];
												nc = 0;
								}
								else if (state == OUT) {
												state = IN;
											//	++array[nc];
												++nw;
											//	nc == 0;
								}
				}
			//	printf("%d %d %d\n", nl, nw, nc);
				for(i = 0; i < 20; ++i){
								printf("%d\n", array[i]);
}
}
								
