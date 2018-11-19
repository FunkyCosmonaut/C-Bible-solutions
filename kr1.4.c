#include <stdio.h>

/* print Fahrenheit-Celsius table
	 for fahr = 0, 20, ..., 300; floating-point version */

main()
{
				float fahr, celsius;
				int lower, upper, step;

				lower = 0;
				upper = 300;
				step = 20;

				printf("  Temperature conversion\n\t Program\n");
				printf("---------------------------------------\n");

				fahr = lower;
				while(celsius <= upper){
								//celsius = (5.0/9.0) * (fahr-32.0); //c*9/5+32 = f
								fahr = celsius * (9.0/5.0) + 32;
								printf("\t%3.0f %6.1f\n", celsius, fahr);
								celsius = celsius + step;
				}
}
