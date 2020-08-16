#include<stdio.h>
int loop(int x)
{
	int count_prime = 0;//DELETE
	long int prime[100000] = {};
	int hello;
	for (int i = 1; i <= x; i++)
	{
		printf("Divisible number of number %d is : ", i);
		int sum = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j != 0 && j > i)
				break;
			else if (i % j == 0 && j <= i)
			{
				printf("%d ", j);
				sum += j;
				hello = j;
			}
		}
		if (sum == i + 1 || sum == 1)
		{
			prime[i] = hello;
			printf("=======> Number %d  is prime number.", i);
			count_prime++;
		}
		printf("\n\n");
	}
	printf("=======================================\nPrime number below %d have %d value.", x, count_prime);
	printf("\n=======================================\nAll prime number : ");
	for (int m = 1; m <= x; m++)
	{
		if (prime[m] != 0)
			printf("%d ", prime[m]);
	}
	return 0;
}
int main()
{
	int x;
	printf("*******WARNING This program can take only number below 100000.\n");
	printf("Enter number :");
	scanf_s("%d", &x);
	printf("\n\n");
	loop(x);
	printf("\n=======================================");
	return 0;
}