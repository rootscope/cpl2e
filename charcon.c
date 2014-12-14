#include <stdio.h>

typedef enum {false, true} bool;

bool running = false;

void start(void);
void stop(void);

main(){
	int n, i, len; 
	char s[20];
	char x[] = "";
	start();
	if(running){
		x = "herro"
		/*
		printf("char: %d\n", sizeof(char));
		printf("int: %d\n", sizeof(int));
		printf("float: %.2f\n", sizeof(float));
		printf("double: %0.2f\n", sizeof(double));
		*/
		len = sizeof(s);
		printf("%c", x);
		//printf("%d", len);	
	}
	stop();
}
void start(void){
	extern bool running;
	running = true;
}
void stop(void){
	extern bool running;
	running = false;
	getchar();
}
