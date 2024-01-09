// 백준 - 2309번 : 일곱 난쟁이
// https://www.acmicpc.net/problem/2309

#include <stdio.h>

int main() {
    int str[9];
    int strAns[7];
    int sum, temp;
    int keyNum;

    for (int i = 0; i < 9; i++)
        scanf("%d", &str[i]);        
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8-i; j++) {
            if (str[j] > str[j+1]) {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    //
    int j = 0;
    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 6+i; j++) {
            sum += str[j];
        }
        if (sum == 100) {
            keyNum = j;
            printf("ee%d\n", j);
            break;
        }
    }
    for (int i = 6; i >= 0; i--) {
        strAns[i] = str[keyNum];
        keyNum--;
    }
    for (int i = 0; i < 7; i++)
        printf("%d\n", strAns[i]);
    
    return 0;
}