#include <stdio.h>

void greetings( char hello[]) {
	printf("\n%s", hello);
}

void toUpper( char string[] ) {
	printf("Making String UPPER...");	
}

void toLower( char string[] ) {
	printf("Making String LOWER...");	
}

// Following Function Added In Master Branch
void toTitle( char string[] ) {
	printf("Making String LOWER...");	
}

int main() {
	char greet[] = "Hello World!";

	greetings(greet);
}

