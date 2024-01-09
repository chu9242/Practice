//백준 - 2587번 : 대표값2
#include <stdio.h>

int main() {
    int str[5];
    int temp;
    int sum;

    for (int i = 0; i < 5; i++)
        scanf("%d", &str[i]);
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4-i; j++) {
            if (str[j] > str[j+1]) {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    sum = 0;
    for (int i = 0; i < 5; i++)
        sum += str[i];
    sum /= 5;

    printf("%d\n%d", sum, str[2]);

    return 0;
}