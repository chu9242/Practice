// 백준 - 2480번 : 주사위 세개(2)
// https://www.acmicpc.net/problem/2480
#include <stdio.h>

int main() {
    int str[3];
    int noon;
    int sameNoon;

    int i, temp;

    for (i = 0; i < 3; i++)
        scanf("%d", &str[i]);
    
    noon = 0;
    if (str[0] == str[1]) {
        noon++;
        sameNoon = str[0];
    }
    if (str[0] == str[2]) {
        noon++;
        sameNoon = str[0];
    }
    if (str[1] == str[2]) {
        noon++;
        sameNoon = str[1];
    }
    
    for (i = 0; i < 2; i++) {
        if (str[i] > str[i+1]) {
            temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
    }
    
    switch (noon) {
        case 0:
            printf("%d", str[2] * 100);
            break;
        case 1:
            printf("%d", 1000 + sameNoon * 100);
            break;
        case 3:
            printf("%d", 10000 + sameNoon * 1000);
            break;
        default:
            printf("noon: %d\n", noon);
            printf("ERORR");
            break;
    }
    
    return 0;
}