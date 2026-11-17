#include <stdio.h>

int main(void){
	int temperatura =25;
	printf("Temperature: %d degrees\n", temperatura);

	float fahrenheit = temperatura *(9/5) +32;
	printf("Fahrenheit: %.1f degrees\n", fahrenheit);
	
	if ( temperatura > 20){
		printf("High temperature\n");
	}
	else{
		printf("Low temperature\n");
	}
	return 0;
}
