#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ... , 300; floating-point version*/

float temp_f2c (float fahr);

main()
{
float fahr;
int lower, upper, step;
lower = 0;		/* lower limit of temperature table */
upper = 300;	/* upper limit */
step = 20;		/* step size */

fahr = lower;
while (fahr <= upper) {
printf("%3.0f %6.1f\n", fahr, temp_f2c(fahr));
fahr = fahr + step;
}
}

// Convert Fahrenheit to Celsius
float temp_f2c (float fahr) {
	return (5.0/9.0) * (fahr-32.0);
}

