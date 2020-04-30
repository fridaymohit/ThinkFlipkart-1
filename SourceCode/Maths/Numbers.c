#inlcude <stdio.h>
#include <math.h>

int sum(int x, int y) {
// CHANGES DONE IN BUGFIX BRANCH
  	int result = 0;
	result = x + y;
	return result;
}

int sub(int x, int y) {
  return x - y;
}

// Following Function Added In Testing Branch
int mul(int x, int y) {
  return x * y;
}

// Following Function Added In Testing Branch
int div(int x, int y) {
	if( y != 0 )
 		 return x / y;
	else 
		printf("Divide By Zero...");
}
