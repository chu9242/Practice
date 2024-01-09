// 백준 - 2480번 : 주사위 세개
#include <stdio.h>

int main() {
    int arr[3];
    int Case;
    int num;
    int num2;

    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    Case = 0;
    num = arr[0];
    for (int i = 0; i < 3-1; i++) {
        for (int j = 0; j < 3-(i+1); j++) {
            if (arr[j] == arr[j+1]) {
                Case++;
                num2 = arr[j];
            }
            else if (num < arr[j+1])
                num = arr[j+1];
        }
    }
    if (Case == 3) 
        printf("%d", 10000 + num2 * 1000);
    else if (Case == 2)
        printf("%d", 1000 + num2 * 100);
    else if (Case == 0)
        printf("%d", num * 100);
    else
        printf("ERROR!");

    return 0;
}