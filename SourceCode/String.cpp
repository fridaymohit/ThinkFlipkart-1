#include <stdio.h>

void greetings( char hello[]) {
	printf("\n%s", hello);
}

int main() {
	char greet[] = "Hello World!";

	greetings(greet);
}

