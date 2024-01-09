// 백준 - 10871번: X보다 작은 수
#include <stdio.h>

int main() {
    int N, X;
    int string[10005];
    int answer[10005];
    int* pt = answer;

    scanf("%d%d", &N, &X);
    for (int i = 0; i < N; i++) {
        scanf("%d", &string[i]);
    }
    for (int i = 0; i < N; i++) {
        if (string[i] < X) {
            *pt = string[i];
            pt++;
        }
    }
    *pt = '\0';
    for (int i = 0; answer[i]; i++)
        printf("%d ", answer[i]);
    return 0;
}