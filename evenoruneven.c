#include <stdio.h>

int main () {
	int input, iseven1;
	scanf("%i", &input);	
	if (input % 2 == 0)
	{
		iseven1 = 1;
	}
	else
	{
		iseven1 = 0;
	}

	int iseven2 = (input % 2 == 0) ? 1 : 0;
	
	int iseven3 = 1 - input % 2;
	
	printf("%i, %i, %i\n", iseven1, iseven2, iseven3);
}

	
