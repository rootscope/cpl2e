#include <stdio.h>

int main(){
	char s[] = "2014";
	//printf("%s", s);
	atoi(s);
	getchar();
}
int atoi(char s[]){
	printf("%s\n", s);
	int i, n;

	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; i++){
		n = 10 * n + (s[i] - '0');
		printf("%d\n", n);
	}
	return n;
}
