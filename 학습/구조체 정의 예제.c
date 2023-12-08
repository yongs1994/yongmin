#include <stdio.h>

// 사각형을 표현하는 구조체 정의
struct Rectangle
{
    double length; // 길이
    double width;  // 너비
};

int main()
{
    // 구조체 변수 선언
    struct Rectangle myRect;

    // 구조체 멤버에 값 할당
    myRect.length = 5.0;
    myRect.width = 3.0;

    // 구조체 멤버의 값을 이용하여 계산
    double area = myRect.length * myRect.width;

    // 결과 출력
    printf("Length: %.2f\n", myRect.length);
    printf("Width: %.2f\n", myRect.width);
    printf("Area: %.2f\n", area);

    return 0;
}
