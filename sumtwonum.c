#include <stdio.h>
int main()
{
    int n1, n2, sum;
    
    printf("Enter two integers: \n");

    scanf("%d %d", &n1, &n2);

    sum = n1 + n2;
    
    printf("%d + %d = %d\n", n1, n2, sum);
	printf("%d\n", sum%2);
	
	if(sum%2==0)
	{
		printf("%d is even\n", sum);
	}
	else
	{
		printf("%d is odd\n", sum);
	}

    return 0;
}