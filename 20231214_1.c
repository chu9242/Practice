/*
 * N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를
 * 모두 합한 값을 반환하는 함수 func(int N)을 작성하라.
 * N은 10만 이하의 자연수이다.
 */

/* 나의 문제풀이 */
#include <stdio.h>

int func1(int N);
int main() {
    printf("func1(16) : %d\n", func1(16));
    printf("func1(34567) : %d\n", func1(34567));
    printf("func1(27639) : %d\n", func1(27639));

    return 0;
}
int func1(int N) {
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0)
            sum += i;
        else if (i % 5 == 0)
            sum += i;
    }
    return (sum);
}

/* 바킹독의 문제풀이 */
/*
int func1(int N) {
    int ret = 0;
    for(int i = 1; i <= N; i++) {
        if(i % 3 == 0 || i % 5 == 0) ret += i;
    }
    return ret;
}
*/