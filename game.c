#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numg,numa,chance;
	chance = 3;

	srand(time(0));
	numg = rand() % 10+1;

	printf("Welcome to the C guessing game\n");
	printf("The game generates a random number from 1 to 10\nGuess the correct numbers within three tries\n");

	while(chance != 0)
	{
		printf("Enter a value (1-10): ");
		scanf("%d", &numa);
		if(numa == numg) {
			puts("YOU WON!");
			return(0);
		}
		else if(numa != numg)
			puts("Try again");
		chance--;
	}
	if(chance == 0)
		printf("You lost");
	return(0);
}
