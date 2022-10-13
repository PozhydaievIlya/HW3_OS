#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv) 
{

	int D,x1,x2;
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	int c=atoi(argv[3]);
	
	printf("Inputed math problem: %dx\u00b2 + %dx + %d = 0\n",a,b,c);
	printf("\u221aD = \u221a%d\n",D=b*b-4*a*c);
	if(D<0)
		printf("D<0 => The equation has no solutions with these inputs. Try again.\n");
	else
		if(D==0)
		{
			x1 = ((b * (-1)) + sqrt(D)) / (2 * a);
			printf("D=0 => The equation has only one root.\nRoot:\nx = %d",x1);
		}
		else
			if(D>0)
			{
				x1 = ((b * (-1)) + sqrt(D)) / (2 * a);
				x2 = ((b * (-1)) - sqrt(D)) / (2 * a);
				printf("D>0 => Regular equation.\nRoots:\nx1 = %d\nx2 = %d\n",x1,x2);
			}
	

	return 0;
 }
