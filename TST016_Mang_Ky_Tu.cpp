#include <stdio.h>
#include <string.h>

#define MAX_CHAR_LENGTH 10000

char s[MAX_CHAR_LENGTH];
int openBrackets[3] = {0};
int closeBrackets[3] = {0};
int quotes = 0;

int check() {
	for (int i = 0; i < 3; i++) {
		if (openBrackets[i] != closeBrackets[i]) {
			return 0; // false
		}
	}
	if (quotes % 2 == 1) {
		return 0; // false
	}
	return 1; // true
}

int main () {
	scanf("%s", s);
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		switch(s[i]) {
			case '(':
				openBrackets[0]++;
				break;
			case ')':
				closeBrackets[0]++;
				break;
			case '{':
				openBrackets[1]++;
				break;
			case '}':
				closeBrackets[1]++;
				break;
			case '[':
				openBrackets[2]++;
				break;
			case ']':
				closeBrackets[2]++;
				break;
			case '\"':
				quotes++;
				break;
			default:
				break;
		}
	}
	if (check()) {
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}

