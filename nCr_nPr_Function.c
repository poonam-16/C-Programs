//User Defined function
#include<stdio.h>
#include<conio.h>
#include<math.h>
xyz()
{
	int i;
	for(i=1;i<=50;i++)
	{
		printf("%c",'-');
	}
}
pqr(int x,char y)
{
	int i;
	for(i=1;i<=x;i++)
	{
		printf("%c",y);
	}
}
main()
{
	int n,r,num,den,nCr,nPr;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter r value : ");
	scanf("%d",&r);
	if(n<r)
	{
		xyz();
		printf("\nr should be less than or equal to n\n");
		pqr(60,'*');
	}
	else
	{
		num = fact(n);
		den = fact(r) * fact(n-r);
		nCr = num/den;
		nPr = num/fact(n-r);
		xyz();
		printf("\n%dC%d = %d",n,r,nCr);
		printf("\n%dP%d = %d\n",n,r,nPr);
		pqr(60,'*');
		return 0;
	}
}
fact(int x)
{
	int i,prod = 1;
	for(i=1;i<=x;i++)
	{
		prod*=i;
	}
	return(prod);
}
