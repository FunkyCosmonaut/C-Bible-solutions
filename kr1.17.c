#include <stdio.h>

#include <stdbool.h>

#define MAXLINE 1000
//Copy all input into buffer
//Count length of string in buffer
//if count is greater than 80 then print out buffer

int gitline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
			

				bool state;
				int len;
				int c;
				char buffer[MAXLINE];
				char current[MAXLINE];


					while ((len = gitline(current, MAXLINE)) > 0){
									copy(buffer, current);
													if(len > 79)
																	printf("%s\n", buffer);
													else
																	printf("Line under 80 characters\n");
									}
					
					//				if (max > 0)
						//							printf("%s", buffer);
									return 0;
				
}

int gitline(char s[], int lim)
{
				int c, i;

				for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
								s[i] = c;
				if (c == '\n') {
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

