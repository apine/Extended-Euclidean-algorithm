#include <stdio.h> 
#include <stdlib.h>

int x2 = 0;
int y2 = 0;

int extendedEuclideanAlgorithm(int a, int b)
{
	int x1 = 0;
	int x0 = 1;
	int y1 = 1;
	int y0 = 0;

	x2 = x1;
	y2 = y1;
	while ((a%b) != 0) {
		int r = (a%b);
		int q = (a/b);
		a = b;
		b = r;
		//Xi = Xi-2 - QiXi-1 and Yi = Yi-2 - QiYi-1
		x2 = x0 - q*x1;
		y2 = y0 - q*y1;
		x0 = x1;
		x1 = x2;
		y0 = y1;
		y1 = y2;
	}

	return b;
}

int main(int argc, char* argv[]) 
{ 
	if (argc != 3) {
		printf("Uasge:\n assign1 a b\n");
		return -1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]); 
	int gcd = extendedEuclideanAlgorithm(a, b);
	printf("gcd(%d, %d) = %d\n", a, b, gcd); 
	printf("x = %d, y = %d\n", x2, y2);
	if (gcd == 1) {
		//the modular multiplicative inverse has to be non-negative
		if (y2 < 0) y2 += a;
		printf("The modular multiplicative inverse of %d mod %d = %d\n", b, a, y2);
	} else {
		printf("No modular multiplicative inverse because %d and %d are not relatively prime\n", a, b);
	}

	return 0; 
} 
