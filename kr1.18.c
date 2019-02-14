#include <stdio.h>
#include <stdbool.h>

#define MAX 1000


//Design:
//Scan line
//detect space/tabs
//while space/tabs do nothing
//spit out the input
//use single buffer
void copy(char to[], char from[]);
void getinput(char input[],int lim);
void trim(char input[], int inlen);
int getlength(char input[]);

int main(){

				char array[MAX];
				char disbuffer[MAX];

				getinput(array, MAX);
				trim(array, getlength(array));
//				copy(disbuffer, array);
				printf("%s", array);
	//			printf("%s", disbuffer);
				printf("%i", getlength(array));
		//		while(getlength(array) > 0)


				return 0;
}

void getinput(char input[], int lim){
				int i;
				int c;

				for(i = 0; i < lim-1 && (c = getchar()) != EOF && c !='\n'; ++i)
								input[i] = c;
				if (c == '\n'){
								input[i] = c;
								++i;
				}
				input[i] = '\0';
}

int getlength(char input[]){

				int i;

				for(i = 0; input[i] != '\0'; i++){
				}

				return i-1;

}

void trim(char input[], int inlen){
//lets try a blankspace detector first
				int i;
				int j = inlen;
				
				for(i = 0; i < inlen; i++){
								if((input[i] == ' ' || '\t') && (input == ' ' || '\t')}
																while(input[j] == ' ' || '\t'){
																j--;
																if(i == j){
																				input[i] = '\0'; }
												}
												else 
												;
				}
}

void copy(char to[], char from[]){

				int i;
				i = 0;

				while((to[i] = from[i]) != '\0')
												++i;
}



