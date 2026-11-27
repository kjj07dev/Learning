#include <stdio.h>

int main() {
	char JUNGOL[6] = "JUNGOL", c;
	int chk = -1;
	scanf("%c", &c);

	for(int i = 0; i < 6; i++) {
		if(c == JUNGOL[i]) {
			chk = i;
			break;
		}
	}

	if(chk == -1) printf("none");
	else printf("%d", chk);
  	return 0;
}