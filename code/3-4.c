#include <stdio.h>

int main()
{
    int a, b, c;

    a = b = c = 5;
    printf("%d %d %d\n", a, b, c);
    // 5 5 5
    
    a = 2 + 3 * 4;
    printf("%d %d %d\n", a, b, c);
    // 대수 연산 우선순위에 따라 14 5 5

    c = a++ + ++b;
    printf("%d %d %d\n", a, b, c);
    /*
     * a++: 후위 증가, a값 사용 후 +1 / ++b: 전위 증가, +1 한 후 b값 사용
     * 따라서 15 6 20
     * CP1에서 당했던 기억을 떠올리자면, c = a+++b; 일 때는 15 5 19
     * 추가로, 자바에선 c = a+++++a가 정의되지만 C에선 정의되지 않는다고 한다
     */

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int a = 32;  // 00100000
    int b = 156; // 10011100

    // a ^ b = 10111100

    a = a ^ b;
    // a = 32 ^ 156, b = 156
    b = a ^ b;
    // a = 32 ^ 156, b = (32 ^ 156) ^ 156 = 32
    a = a ^ b;
    // a = (32 ^ 156) ^ 32 = 156, b = 32

    // XOR: 같은 수 XOR하면 0, 0이랑 XOR하면 자기 자신

    printf("%d %d\n", a, b);

    return 0;
}
 */
