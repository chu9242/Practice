/* 두 개의 문자열을 입력 받아서 같다면 "같다",
 * 다르면 "다르다" 라고 출력하는 함수를 만들어보세요.
 */

#include <stdio.h>

int compare(char *str1, char *str2);
int main() {
    char str1[100];
    char str2[100];

    printf("enter 2 string: ");
    scanf("%s%s", str1, str2);
    if (compare(str1, str2))
        printf("같다\n");
    else
        printf("다르다\n");
    return 0;
}
int compare(char *str1, char *str2) {
    while (*str1) {
        if (*str1 != *str2)
            return 0;
        str1++, str2++;
    }
    if (*str2 != '\0')
        return 0;
    return 1;
}