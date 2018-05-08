#include<stdio.h>
#include<stdlib.h>
#include<math.h>



#define paso 0.00005

double parabola(double x){

return x * x;
}

double rec(double x){


return 3 * x + 4;
}

double e(double x){

return exp(1 / x);
}

double inter(double li, double ls, double (*f)(double)){
int res = 0;
for( double x=li; x<=ls; x += paso)
	res += (*f)(x);
return res * paso;

}
int main(){






printf("la integral es %.2lf", inter(0., 4., &parabola));














return EXIT_SUCCESS;
}
