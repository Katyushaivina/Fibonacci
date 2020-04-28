#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned long long  int fibb(long int n)    /* F9=34 */
{                                           /* F34=5702887 */
	long long int x;                        /* F50=12586269025 */
	if (n==0) 
	 {x=0;}
	else if (n==1) 
	 {x=1;}
	else
	  {x=fibb(n-1)+fibb(n-2);}
	return x;
}

int main()
{
unsigned long long int n , x;
scanf("%lld",&n);
x=fibb(n-1)+fibb(n-2);
printf("%lld\n" , x);	
return 0;
}
