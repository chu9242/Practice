/* 바킹독 0x00 문제 3
 * N이 제곱수이면 1을 반환하고 제곰수가 아니면 0을
 * 반환하는 함수 func3(int N)을 작성하라.
 * N은 10억 이하의 자연수이다.
 * 
 * func3(9) = 1,
 * func3(693953651) = 0,
 * func3(756580036) = 1
 */

#include <stdio.h>

int func3(int N);
int main() {
    printf("answer 1 : %d\n", func3(9));
    printf("answer 2 : %d\n", func3(693953651));
    printf("answer 3 : %d\n", func3(756580036));

    return 0;
}
/* 나의 문제풀이 */
int func3(int N) {
    for (int i = 1; i*i <= 1000000000; i++) {
        if (i*i == N)
            return (1);
    }
    return (0);
}