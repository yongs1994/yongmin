#include <stdio.h>
// 함수 포인터는 함수의 주소를 저장하는 변수로서,
// 이를 사용하여 해당 함수를 간접적으로 호출할 수 있습니다.

// 예제 함수 1
void add(int a, int b)
{
    printf("Sum: %d\n", a + b);
}

// 예제 함수 2
void subtract(int a, int b)
{
    printf("Difference: %d\n", a - b);
}

int main()
{
    // 함수 포인터 선언: int와 int를 인자로 받고 아무것도 반환하지 않는 함수를 가리키는 포인터
    void (*operation)(int, int);

    // 함수 포인터에 함수 주소 할당
    operation = add;
    operation(5, 3); // Sum: 8

    operation = subtract;
    operation(5, 3); // Difference: 2

    return 0;
}

// 여기서 주의할 점은 함수 포인터의 선언이 해당 함수의 시그니처와 일치해야 한다는 것입니다.
// 함수 포인터 operation의 선언이 void (*operation)(int, int);으로 되어 있으므로
// add와 subtract 함수도 void를 반환하고,
// int 두 개를 인자로 받는 시그니처를 가져야 합니다.
