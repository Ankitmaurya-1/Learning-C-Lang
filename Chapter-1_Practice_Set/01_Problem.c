#include <stdio.h>

int main()
{
    // int length = 2;
    // int breadth = 6;
    int length, breadth;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("The area of the rectangle is: %d\n", length * breadth);
    return 0;
}