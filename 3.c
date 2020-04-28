#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct matritsa                           /* F9=34 */
{                                         /* F34=5702887 */
	long long int a;                      /* F50=12586269025 */
	long long int b;
	long long int c;
	long long int d;
};
struct matritsa  umnozh (struct matritsa  x,struct matritsa y)
{
     struct matritsa z;
     z.a=x.a*y.a+x.b*y.c;
     z.b=x.a*y.b+x.b*y.d;
     z.c=x.c*y.a+x.d*y.c;
     z.d=x.c*y.b+x.d*y.d;
     return z;
}
struct matritsa stepen (int n,struct matritsa f1)
{
 struct matritsa     x={1,0,0,1},p=f1;

while (n!=0) 
{
	if (n%2==1)
	 {
		 n=n-1 ;
        x=umnozh(p,x);
     }
	else 
	 {
		p=umnozh(p,p);
		 n=n/2;
	}
	
}

	return x;
}
int main()
{
	int n;
	struct matritsa  f0={1,0,0,0};
	struct matritsa  f1={1,1,1,0};
	struct matritsa  f3={0,0,0,0};
	scanf("%d",&n);
	f3=stepen (n-1 , f1);

	f3=umnozh(f3,f0);
	printf("%lld\n" , f3.a);
	return 0;
}
