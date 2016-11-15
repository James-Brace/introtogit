#include <stdio.h>
int main()
{
    int n1, n2, Sum;
    
    printf("Enter two integers: ");

    scanf("%d %d", &n1, &n2);

    Sum = n1 + n2;
    
    printf("%d + %d = %d", n1, n2, Sum);

    return 0;
}