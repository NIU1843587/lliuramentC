#include <stdio.h>

int main(void){
	int temperatura =25;
	printf("Temperature: %d degrees\n", temperatura);
	float fahrenheit = temperatura *(9/5) +32;
	printf("Temperature: %.1f degrees\n", fahrenheit);
	
	return 0;
}
