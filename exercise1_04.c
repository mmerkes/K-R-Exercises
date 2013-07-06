#include <stdio.h>

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = -20;
	upper = 100;
	step = 5;

	celsius = lower;

	printf("Celsius-Fahrenheit\n");
	while (celsius <= upper) {
		fahr = celsius * 1.8 + 32;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius += step;
	}
}