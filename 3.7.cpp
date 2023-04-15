#include <stdio.h>

main() {
	int sum, i;
	for(i=1; i<101; i++) {
		sum = sum + i;
	}
	printf("%i", sum);
}
