#include <stdio.h>

#define	IN 	1 	// In a word
#define OUT	0 	// out of a word

main() {
	int c, length, state, graph[10];

	c = length = state = 0;

	for (int i = 0; i < 10; i++)
		graph[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a')) {
			if (state == IN) {
				if (length > 10)
					graph[9]++;
				else
					graph[length - 1]++;
			}
			state = OUT;
			length = 0;
		} else {
			state = IN;
			length++;
		}
	}
	putchar('\n');
	for (int i = 1; i <= 10; i++) {
		printf("%d", i);
		if(i == 10)
			putchar('+');
		putchar('\t');
		for (int j = 0; j < graph[i - 1]; j++)
			putchar('-');
		putchar('\n');
	}
}