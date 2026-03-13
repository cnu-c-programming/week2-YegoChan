#include <stdio.h>

int main()
{
    int a = -1;
    unsigned int b = 1;

    if (a < b) {
        printf("a < b\n");
    } else {
        printf("a >= b ???\n");
    }
    /*
     * C에서 int와 unsigned int의 비교는, int를 unsigned int로 캐스팅 한 뒤 실행
     * -1의 4바이트 2진수 표현: 11111111 11111111 11111111 11111111
     * 이는 unsigned int로 2^32 - 1
     * 따라서 2^32 - 1 > 1
     */

    return 0;
}
