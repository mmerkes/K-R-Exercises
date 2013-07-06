#include <stdio.h>

#define 	MAX	128 //total ASCII chacters

main() {
	int c, chars[MAX];

	// initialize the array
	for (int i = 0; i < MAX; i++) 
		chars[i] = 0;

	while ((c = getchar()) != EOF) 
		chars[c]++;

	for (int i = 0; i < MAX; i++) {
		if (chars[i] != 0) {
			if (i == 32) { //space character
				printf("<space>");
			} else if (i == 9) { //tab character
				printf("<tab>");
			} else if (i == 10) {
				printf("<nl>");
			} else if (i == 92) {
				printf("\\");
			} else
				printf("%c", i);

		
			putchar('\t');

			for(int j = 0; j < chars[i]; j++) 
				putchar('-');

			putchar('\n');
		}
	}
}