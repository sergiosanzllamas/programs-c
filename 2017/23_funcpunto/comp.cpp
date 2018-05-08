#include <stdio.h>
#include <stdlib.h>
#define N 5

double sum(double op1, double op2) {return op1 + op2},
double res(double op1, double op2) {return op1 - op2},
double mul(double op1, double op2) {return op1 * op2},
double div(double op1, double op2) {return op1 / op2};



int main(){
	
int a[N];

double(*op[N])(double, double);
op[0] = &sum;
op[1] = &res;
op[2] = &sum;
op[3] = &div;
op[4] = &mul;


dor(int a=0; a<N; a++)
	printf("%.2lf\n", (*op[a])(5*a+1, 2*a+3));



	return EXIT_SUCCESS;
}
