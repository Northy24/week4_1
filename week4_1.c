#include <stdio.h>

int main() {
	float  a, b, c;
	printf("Enter a, b :");
	scanf("%f %f", &a, &b);
	c = (2*a) + b;
	printf("c = 2a + b -> c = %.2f\n", c);
	c = (a * a * a * a * a) + (a * a * a * a) + (2 * a * a * a) + (3 * a * a) + (4 * a) + 3;
	printf("c = a^5 + a^4 + 2a^3 + 3a^2 + 4a +3 -> c = %.2f\n", c);
	c = 2 + (3 * a);
	printf("c = 2 + 3a -> c = %.2f", c);
	return 0;
}
