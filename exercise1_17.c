#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);

/* print any line over 80 characters */
int main() {
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE]; /*current input line */

	while ((len = getLine(line, MAXLINE)) > 0)
		if (len >= 80) {
			printf("%s", line);
		}
	return 0;
}

/* getLine: read a line into s, return lenght */
int getLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	
	if(c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}