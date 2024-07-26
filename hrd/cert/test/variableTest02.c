#include <stdio.h>

int x = 10; // 전역 변수

void someFunction() {
    static int x = 20; // 정적 지역 변수
    printf("In someFunction: x = %d\n", x);
}

int main() {
    int x = 30; // 지역 변수
    someFunction();
    printf("In main: x = %d\n", x);
    return 0;
}

