#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	unsigned long nsamples = 3;
	if (argc - 1) sscanf(argv[1], "%lu", &nsamples);
	nsamples = pow(10, nsamples);
	for (unsigned long x = 1; x < nsamples; x++)

	{
		double d = 1 / (double)x;
		double res = 0;
		for (int i = 0; i < x; i++) res+=d;
		printf("%lu %.100f\n", x, fabs(res - 1));
	}	
}
