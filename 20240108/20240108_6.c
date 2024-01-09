// 백준 - 2753번 : 윤년
#include <stdio.h>

int main() {
    int ans;

    scanf("%d", &ans);
    if (ans % 4 == 0) {
        if (ans % 100 != 0)
            printf("1");
        else if (ans % 400 == 0)
            printf("1");
        else
            printf("0");
    }
    else
        printf("0");

    return 0;
}