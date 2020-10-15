#include <stdio.h>

int isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	
	float n, k = 0;
	printf("Input N: ");
	scanf("%f", &n);

	if (n>2)
	{
		for (int i = 2; i <= n; i++)
		{
			if (isPrime(i) == 1)
			{
				k++;
				printf("%d \n", i);
			}
		}
		printf("%f \n", k / (n - k - 1));
	} 
	
	return 0;
}


