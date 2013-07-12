#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print any line over 80 characters */
int main() {
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE]; /*current input line */
	char longest[MAXLINE]; // backwards input line

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		printf("%d %s", len, line);

		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) /* there was a line */
		printf("%s", longest);
		
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}



