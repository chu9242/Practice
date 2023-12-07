/*
 * 길이가 최대 100 인 문자열을 하나 입력 받아서
 * 문자열을 역순으로 출력하는 함수를 만들어보세요.
 * 예를 들어서, "abcde" 입력 -> "edcba" 출력
 */

#include <stdio.h>

int length_string(char *string);
int swap(char *string);
int main() {
    char string_a[100] = "abcdef";

//    printf("enter string under 100length: ");
//    scanf("%s", string_a);
    swap(string_a);
    printf("%s\n", string_a);
    return 0;
}
int length_string(char *string) {
    int i;

    i = 0;
    while (string[i])
        i++;
    return (i);
}
int swap(char *string) {
    char temp;
    int length;

    length = length_string(string);
        for (int j = 0; j != length-1; j++) {
            for (int i = 0; i != length-1-j; i++) {
                temp = string[i];
                string[i] = string[i+1];
                string[i+1] = temp;
            }
        }
    return 0;
}