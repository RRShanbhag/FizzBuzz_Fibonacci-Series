#include <stdio.h>
#include <stdlib.h>

void fibonacci(int N);

void fibonacci (int N)
{
	int a = 0;
	int b = 1;
	printf("%d", b);
	for(int i = 1; i < N; i++)
	{
		int c = a + b;
		a = b;
		b = c;
		printf(", %d", c);
	}
	printf("\n");
	return;
}
int main(int argc, char *argv[])
{
	int N = 0;
	printf("Enter the Series Limit\n");
	scanf("%d", &N);

	fibonacci(N);
	return 0;
}