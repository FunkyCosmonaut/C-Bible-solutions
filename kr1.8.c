#include <stdio.h>


int main()
{

				int nl;
				int blank;
				int tabs;
				int c;

				nl = blank = tabs = 0;
				while ((c = getchar()) != EOF){
								if (c == '\n')
												++nl;
								if (c == ' ')
												++blank;
								if ( c == '\t')
												++tabs;
				}
				printf("newline: %d\nblanks:%d\ntabs:%d\n", nl, blank, tabs);
}
