#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, C, swtch;
	swtch = 0;
	printf("Enter A, B and C, then programm switch their values: ");
	printf("A = ");
	scanf_s("%d", &A);
	printf("B = ");
	scanf_s("%d", &B);
	printf("C = ");
	scanf_s("%d", &C);
	swtch = A;
	A = C;
	C = B;
	B = swtch;
	printf("Result is: ");
	printf("A = ");
	printf("%d", A);
	printf(" B = ");
	printf("%d", B);
	printf(" C = ");
	printf("%d", C);
}
