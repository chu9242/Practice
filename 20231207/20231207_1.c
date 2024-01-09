/*
 * 길이가 최대 100 인 문자열을 입력 받아서
 * 소문자는 대문자로, 대문자는 소문자로
 * 출력하는 함수를 만들어보세요.
 * 예를 들어서, "aBcDE" 입력 -> "AbCde"
 */

#include <stdio.h>

void scanAlphabet(char *str);
int main() {
    char str[100];

    printf("Enter alphabet: ");
    scanf("%s", str);
    scanAlphabet(str);
    printf("%s", str);
    return 0;
}
void scanAlphabet(char *str) {
    while (*str) {
        if ('A' <= *str && *str <= 'Z')
            *str += 32;
        else
            *str -= 32;
        str += 1;
    }
}
        