#include <stdio.h>

int main()
{
    printf("%f\n", 5 / 3);
    printf("%f\n", (float) 5 / 3);
    /*
     * 5 / 3 = int 1인데, 형식 지정자 %f는 double을 의도함. 따라서 잘못된 출력
     * (float) 5를 통해 실수 연산이 되고, 따라서 1.666667을 출력
     * (float) (5 / 3) 이었다면 (float) 1 = 1.000000을 출력력
     */

    return 0;
}
