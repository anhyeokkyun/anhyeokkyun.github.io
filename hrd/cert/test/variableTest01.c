#include <stdio.h>

int main() {
    static int var = 5; // 정적 변수
    int var = 10;       // 지역 변수
    
    printf("%d\n", var); // 출력되는 값은?
    return 0;
}

