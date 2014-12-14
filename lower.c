#include <stdio.h>

int main(){
	int c = 'P';
	int n;

	n = lower(c);
	printf("%d\n", n);
	getchar();
}

int lower(int c){
	if(c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
