#include <stdio.h>
#include <stdlib.h>

int arr[100];

int cmpfunc(const void *a, const void *b) {
    return ((int)a - (int)b);
}

void find_phone_number(int n) {
    int i, j;
    int count = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            arr[count++] = arr[i];
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    find_phone_number(n);
    return 0;
}