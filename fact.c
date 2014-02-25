int n  ;
int factorial (int n)
	{
	int res = 1;
	while (n >= 1)
	{	res = res * n;
		n = n -1;
	}
	printf ("%d\n" , res);
	return 0;
	}

int main ()
{
	printf("pick a number\n");
	
	scanf("%d", &n);
	
	factorial(n);
	
	return 0;
}
