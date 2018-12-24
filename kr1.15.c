#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int convert(int fahr){

				int celc;
				celc = (5.0/9.0)*(fahr-32);
				return celc;
}

int main(){
				
				int i;
				int convert(int fahr);
				for(i = LOWER; i <= UPPER; i = i + STEP)
								printf("%3d	%6d\n", i, convert(i));
				
				
				return 0;	
}
