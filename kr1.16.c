#include <stdio.h>
#define MAXLINE 1000

//int getline(char s[], int lim);
//void copy(char to[], char from[]);

int main()
{

				int geetline(char s[], int lim);
				void copy(char to[], char from[]);
				int len;
				int max;
				char line[MAXLINE];
				char longest [MAXLINE];

				max = 0;
				while ((len = geetline(line, MAXLINE)) > 0){
								printf("\nlength of last line:  %i\n",len-1);
												if (len > max){
																max = len;
																copy(longest, line);
												}
				}
				if (max > 0)
								printf("longest line:\n%s", longest);

				printf("\nLength of the longest: %i\n", max-1);

				return 0;
}

int geetline(char s[], int lim)
{
				int c, i;

				for (i = 0; i < lim-1 && (c=getchar())!=EOF &&  c!='\n'; ++i)
								s[i] = c;
				if (c == '\n'){
								s[i] = c;
								++i;
				}
				s[i] = '\0';
				return i;
}

void copy(char to[], char from[])
{
				int i;

				i = 0;
				while ((to[i] = from[i]) != '\0')
								++i;
}
