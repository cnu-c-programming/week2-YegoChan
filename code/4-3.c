#include <stdio.h>

int main()
{

    int input;
    scanf("%d", &input);

    if (input <= 0) {
        printf("%s", "Please insert Natural Number greater than 1");
        return 0;
    }
    if (input == 1) {
        printf("false");
        return 0;
    }
    /*
     * 1보다 큰 자연수를 따질거면 1도 따로 예외처리를 하지 않는 게 바람직하지만
     * 테스트 케이스에서 1 입력시 false를 출력하는 중
     */
    

    for (int i = 2; i * i <= input; i++) {
        if (input % i == 0) {
            printf("false");
            return 0;
        }
    }

    printf("true");

    return 0;
}
