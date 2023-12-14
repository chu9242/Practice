/* 바킹독 0x00 문제 2
 * 주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른
 * 위치의 두 원소가 존재하면 1을, 존재하지 않으면 0을 반환
 * 하는 func2(int arr[], int N)을 작성하라.
 * arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.
 * 
 * func2({1, 52, 48}, 3) = 1,
 * func2({50, 42}, 2) = 0,
 * fucn2({4, 13, 63, 87}, 4) = 1
 */

#include <stdio.h>

int func2(int arr[], int N);
int main() {
    int arr1[3] = {1, 52, 48};
    int arr2[2] = {50, 42};
    int arr3[4] = {4, 13, 63, 87};
    printf("answer 1 : %d\n", func2(arr1, 3));
    printf("answer 2 : %d\n", func2(arr2, 2));
    printf("answer 3 : %d\n", func2(arr3, 4));

    return 0;
}
/* 나의 문제풀이 */
int func2(int arr[], int N) {
    
    if (N == 2) {
        if (arr[0] + arr[1] == 100)
            return 1;
    }
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N-1; j++) {
            if (arr[i] + arr[j+1] == 100)
                return 1;
        }
    }
    if (N == 1000) {
        if (arr[998] + arr[999] == 100)
            return 1;
    }
    return 0;
}
/* 바킹독의 문제풀이 
int func2(int arr[], int N) {
    for(int i = 0; i < N; i++)
        for(int j = i+1; j < N; j++)
            if(arr[i] + arr[j] == 100) return 1;
    return 0;
}
*/