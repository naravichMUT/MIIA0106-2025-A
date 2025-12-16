#include <iostream>

void swapByValue(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;

}

void swapByReference(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int x = 10;
    int y = 20;

    std::cout << "Before swapByValue: x = " << x << ", y = " << y << std::endl;
    swapByValue(x, y);
    std::cout << "After swapByValue:  x = " << x << ", y = " << y << std::endl << std::endl;

    std::cout << "Before swapByReference: x = " << x << ", y = " << y << std::endl;
    swapByReference(&x, &y);
    std::cout << "After swapByReference:  x = " << x << ", y = " << y << std::endl;

    return 0;
}