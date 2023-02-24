#include<stdio.h>
#include<conio.h>
float area(float r)
{
	float a;
	a=3.14*r*r;
	return a;
}

float perimeter(float r)
{
	float p;
	p=3.14*2*r;
	return p;
}

int main()
{
	float l;
	printf("Enter the value of the radius:");
	scanf("%f",&l);
	float a=area(l);
	float p=perimeter(l);
	printf("Area = %f",a);
	printf("\nPerimeter = %f",p);
	
	getch();
	return 0;
}
