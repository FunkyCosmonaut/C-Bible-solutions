#include <stdio.h>


main()
{
				int c, inrow;
				int i;
				
				inrow = 0;
				while((c = getchar()) != EOF){
							putchar(c);
								if(c == ' '){
												while((c = getchar()) == ' ')
																;
												putchar(c);
				}
}
}

