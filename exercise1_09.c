#include <stdio.h>

main() {
	int c, prev;

	c = getchar();
	printf("%c", c);
	prev = c;
	while ((c = getchar()) != EOF) {
		if(c != ' ')
			printf("%c", c);
		else if (prev != ' ')
			printf("%c", c);
		prev = c;
	}
}