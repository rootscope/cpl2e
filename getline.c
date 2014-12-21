#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main(){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while((len = getline(line, MAXLINE)) > 0)
		//printf("%d\n", len);
		if (len > max){
			max = len;
			copy(longest, line);
		}
		printf("%d\n", len);
		if(len > 80){
			printf("%d\n", len);
		}
	if(max > 0)
		printf("%s", longest);
	getchar();
	return 0;
}
int getline(char s[], int lim){
	int c, i;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = c;
		//printf("s[i] = %c, c = %d, i = %d\n", s[i], c, i);
	}
	if(c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0'){
		//printf("to[i] = %c, from[i] = %c\n", to[i], from[i]);
		i++;
	}
}
