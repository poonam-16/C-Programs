#include<stdio.h>
#include<math.h>
main()
{
	int i;
	printf("Enter value of i : ");
	scanf("%d", &i);
	printf("\n%d! = %d\n", i, fact(i));
	return 0;
}

fact(int n)
{
	if(n<=1)
	{
		return 1; //stopping statement
	}
	return n * fact(n-1);
}
