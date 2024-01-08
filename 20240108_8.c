// 백준 - 2490번 : 윷놀이
#include <stdio.h>

int main() {
    int arr[3][4];
    int cou[3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < 3; i++) {
        cou[i] = 0;
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == 0)
                cou[i]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        switch (cou[i]) {
            case 0:
                printf("E\n");
                break;
            case 1:
                printf("A\n");
                break;
            case 2:
                printf("B\n");
                break;
            case 3:
                printf("C\n");
                break;
            case 4:
                printf("D\n");
                break;
        }
    }
    
    return 0;
}