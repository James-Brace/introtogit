#include <stdio.h>
int main()
{
    int n1, n2, sumoftwonums;
    
    printf("Enter two integers: \n");

    scanf("%d %d", &n1, &n2);

    sumoftwonums = n1 + n2;
    
    printf("%d + %d = %d\n", n1, n2, sumoftwonums);
	printf("%d\n", sumoftwonums%2);
	
	if(sumoftwonums%2==0)
	{
		printf("%d is even\n", sumoftwonums);
	}
	else
	{
		printf("%d is odd\n", sumoftwonums);
	}

    return 0;
}