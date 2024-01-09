// 백준 - 2752번 : 세수정렬
#include <stdio.h>

int main() {
    int arr[3];

    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    int temp;
    for (int i = 0; i < 3-1; i++) {
        for (int j = 0; j < 3-(i+1); j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}