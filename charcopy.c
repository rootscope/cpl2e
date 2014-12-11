#include <stdio.h>

main(){
	int c;

	while ((c = getch()) != EOF) {
		putch(c);
	}
	getch();
}
