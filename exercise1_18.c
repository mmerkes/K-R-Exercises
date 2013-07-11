#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);
int trim(char line[], int length);

/* print any line over 80 characters */
int main() {
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE]; /*current input line */

	while ((len = getLine(line, MAXLINE)) > 0) {
		int valid = trim(line, len);
		if (valid != 0) {
			printf("%s", line);
		}
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

int trim(char s[], int len) {
	while ( len != 0 && (s[len] == ' ' || s[len] == '\t' || 
			s[len] == '\n' || s[len] == '\0')) {
		len--;
	}
	
	if (len == 0) 	// If the line is blank, return 0
		return 0;
	else {			// If the line is not blank, return 1
		len++;
		s[len] = '\n';
		len++;
		s[len] = '\0';
		return 1;
	}
}



