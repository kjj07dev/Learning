#include <stdio.h>

int main() {
	char c;
	int n;

	scanf("%c %d", &c, &n);

	if(c == 'M') {
		if(n >= 18) printf("MAN");
		else printf("BOY");
	}
	else {
		if(n >= 18) printf("WOMAN");
		else printf("GIRL");
	}
	
	return 0;
}
