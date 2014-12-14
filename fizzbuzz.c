#include <stdio.h>

main(){
	int s;
	int i;
	i = 0;
	for(i=0; i <= 100; i++){
		if(i % 3 == 0){
			s += "Fizz";
		}
		printf("%c", s);
		s = "";
	}	
	getchar();
}
