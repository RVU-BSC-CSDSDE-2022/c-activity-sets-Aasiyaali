#include <stdio.h>
struct _complex
{
	float real, imaginary;
};
typedef struct _complex Complex;

int get_n()
{
int n;
	printf("Enter the number of complex numbers");
	scanf("%d",&n);
	return n;
}

Complex input_complex()
{	
	Complex c;
	printf("Enter real and imaginary parts of complex number\n");
	scanf("%f%f",&c.real,&c.imaginary);
	return c;
}
void input_n_complex( int n, Complex c[n])
{
	for(int i =0; i<n; i++)
    c[i] = input_complex();
}



Complex add(Complex a, Complex b)
{
	Complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}

Complex  add_n_complex( int n, Complex c[n])
{
	Complex sum = {0,0};
	for(int i =0; i<n ; i++)
		sum = add(sum,c[i]);
	return sum;
}

void output( int n, Complex c[n] ,Complex sum)
{
	for ( int i = 0; i < n-1; i++)
		printf( "(%f + i %f ) + \n",c[i].real,c[i].imaginary);
	printf("(%f + i%f) =\n",c[n-1].real,c[n-1].imaginary);
	printf("(%f + i%f)\n",sum.real,sum.imaginary);
}

int main()
{
	int n = get_n();
	Complex c[n];
	input_n_complex(n,&c[n]);
	Complex sum = add_n_complex(n,&c[n]);
	output(n,&c[n],sum);
	return 0;
}