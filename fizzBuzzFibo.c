#include <stdio.h>
#include <stdlib.h>

void fibonacci(int N);
void checkFizzBuzz(int Number);


void checkFizzBuzz(int Number)
{
	if(Number % 3 == 0)
		printf(", Buzz");
	else
		printf(", %d", Number);
	return;
}

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
		checkFizzBuzz(c);
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