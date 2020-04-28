#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
unsigned long long int n , x, i, j,z,y;      /* F9=34 */
scanf("%lld",&n);                            /* F34=5702887 */
i=0; j=1;                                    /* F50=12586269025 */
for(z=3;z<n+2;z++)
{
	y=i+j; 
	i=j;
	j=y;
}
x=y;
printf("%lld\n" , x);	
return 0;
}
