#include <stdio.h>

test(){
    float f, c;
    int lower, upper, step;

    lower = 10;
    upper = 130;
    step = 20;

	f = lower;
	while(f <= upper){
		c = (5.0/9.0) * (f-32.0);
		printf("%3.0fF : %.2fC\n", f, c);
		f = f + step;
	}
	getch();
}

main(){
	test();
}
