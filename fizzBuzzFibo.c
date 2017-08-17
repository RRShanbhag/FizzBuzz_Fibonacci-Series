#include <stdio.h>
#include <stdlib.h>

void fibonacci(int N);
void checkFizzBuzz(long Number);
int isprime(long Number);

int isprime(long Number)
{
	int i, flag=1;
	if(Number < 2)
		flag = 0;
    for(i=2; i<=Number/2; ++i)
    {
        if(Number%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

void checkFizzBuzz(long Number)
{
	if (Number % 15 == 0)
		printf(", FizzBuzz");
	else if(Number % 3 == 0)
		printf(", Buzz");
	else if (Number % 5 == 0)
		printf(", Fizz");
	else if (isprime(Number))
		printf(", BuzzFizz");
	else
		printf(", %ld", Number);
	return;
}

void fibonacci (int N)
{
	long a = 0;
	long b = 1;
	printf("%ld", b);
	for(int i = 1; i < N; i++)
	{
		long c = a + b;
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
	printf("Enter the Series Limit: Maximum Limit 50\n");
	scanf("%d", &N);
	if (N > 50)
	{
		printf("Error: Maximum Limit Crossed\n");
		exit(0);
	}
	fibonacci(N);
	return 0;
}