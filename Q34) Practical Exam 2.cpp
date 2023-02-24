#include <stdio.h>
int main() {
	float s,u,j,a;
	int h,s1;
	printf("Input the Value of x :");
	scanf("%f",&s);
	printf("Input the number of terms : ");
	scanf("%d",&s1);
	u =1; j = 1;
	for (h=1;h<s1;h++) {
	  a = (2*h)*(2*h-1);
	  j = -j*s*s/a;
	  u =u+ j;
	}
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",u,s1,s);
    return 0;
}
