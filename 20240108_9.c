// 백준 - 2576번: 홀수
#include <stdio.h>

int main() {
    int arr[7];
    int arr2[7];
    int *pt = arr2;
    
    int sum;
    int min;

    arr2[0] = '\0';
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) {
            *pt = arr[i];
            pt++;
        }
    }
    *pt = '\0';
    
    if (arr2[0] == '\0') {
        printf("-1");
        return 0;
    }
    sum = 0;
    min = 100;
    for (int i = 0; arr2[i]; i++) {
        sum += arr2[i];
        if (min > arr2[i])
            min = arr2[i];
    }
    printf("%d\n%d", sum, min);
    
    return 0;
}