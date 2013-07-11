#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);
void reverse(char line[], char rs[], int length);

/* print any line over 80 characters */
int main() {
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE]; /*current input line */
	char backwards[MAXLINE]; // backwards input line

	while ((len = getLine(line, MAXLINE)) > 0) {
		reverse(line, backwards, len);
		printf("%s", backwards);
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

void reverse(char s[], char rs[], int len) {
	int j = 0;
	for (int i = (len - 2); i >= 0; i--) {
		rs[j] = s[i]; // reverse string equals s[] character
		j++;
	}
	rs[j] = '\n';
	j++;
	rs[j] = '\0';
}



