#include <stdio.h>

main()
{
				int c, i, nwhite, nother;
				int ndigit[26];
				char n = 'a';

				nwhite = nother = 0;
				for (i = 0; i < 26; ++i)
								ndigit[i] = 0;

				while ((c = getchar()) != EOF)
								if (c >= 'a' && c <= 'z')
												++ndigit[c-'a'];
								else if (c == ' ' || c == '\n' || c == '\t')
												++nwhite;
								else 
												++nother;

				printf("\ncharacters =\n");
				for (i = 0; i < 26; ++i, ++n)
								printf("%c =  %d\n", n , ndigit[i]);
				printf(", white space = %d, other = %d\n",
												nwhite, nother);}
