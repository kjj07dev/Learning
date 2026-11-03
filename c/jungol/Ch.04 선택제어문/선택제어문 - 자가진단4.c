#include <stdio.h>

int main() {
	double a;

	scanf("%lf", &a);

	if(a <= 50.8) {
		printf("Flyweight");
	}
	else if(a <= 61.23) {
		printf("Lightweight");
	}
	else if(a <= 72.57) {
		printf("Middleweight");
	}
	else if(a <= 88.45) {
		printf("Cruiserweight");
	}
	else printf("Heavyweight");
}
