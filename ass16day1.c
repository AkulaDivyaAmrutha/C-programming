#include<stdio.h>
main()
{
	int n,i,x;
	n=5;
	i=1;
	while(i<=10)
	{
	    x=n*i;
		printf("%dx%d=%d\n",n,i,x);
		i++;
	}
}
