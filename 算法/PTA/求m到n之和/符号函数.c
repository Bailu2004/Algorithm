#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));
    
    return 0;
}

int sign(x){
	int a;
	if(x>0)
	{
		a = 1;
	}
	
	else if(0==x)
	{
	a = 0;
	}
	
	else
	{
	a = -1;
	}
	return a;
}
