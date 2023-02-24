//frequency 
#include<stdio.h>
int main() {
    int a[100],l=0,k=1;

    printf("Enter the no.of elements of the array:");
    scanf("%d",&l);
    
    printf("Enter the elements: \n");
    for(int i=0;i<l;i++) {
        scanf("%d",&a[i]);
    }

    for (int j = 0; j < l ; j++) {
    
            if (a[j] == a[j+1]) {
                k++;
                printf("Frequency of Array[%d] : %d\n",j,k);
            }
            else 
            {
                k=1;
                printf("Frequency of Array[%d] : %d\n",j,k);
            }
    }

    return 0;
}