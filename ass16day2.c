/*c program to numbers from 1 to n divisible by k and also print even and odd sum*/
#include<stdio.h>
main()
{
	int n,k,even,odd;
	n=1;
	k=5;
	even=odd=0;
	while(n<=20)
	{
		if(n%k==0)
		{
		printf("%d\n",n);
		if(n%2!=0)
		odd=odd+n;
		else
		even=even+n;
	    }
		n++;
    }
    printf("\n%d\t%d",even,odd);
}
