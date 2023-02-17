/*c program to print factorial of n*/
 #include<stdio.h>
main()
{
	int n,f;
	n=1;
	while(n<=5)
	{
		f=f*n;
		n++;
	}
	printf("%d",f);
}
