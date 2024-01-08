/* N 이하의 수 중에서 가장 큰 2의 거듭제곱수를
 * 반환하는 함수 func4(int N)을 작성하라.
 * N은 10억 이하의 자연수이다.
 *
 * func4(5) = 4,
 * func(97615282) = 67108864,
 * func(1024) = 1024
 */
#include <stdio.h>

int func4(int N);
int main() {
    printf("%d\n", func4(5));
    printf("%d\n", func4(97615282));
    printf("%d\n", func4(1024));

    return 0;
}
int func4(int N) {
    int i;

    i = 1;
    while (i*2 <= N) {
        i *= 2;
    }

    return (i);
}