#include <stdio.h>
int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		if(getchar() == EOF)
			break;
		printf(" %d\n", c);
	}
	printf("%d %u %x- at EOF\n", c, c, c);
}
