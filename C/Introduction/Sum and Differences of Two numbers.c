#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    a=a-b;
    a=a+b+b;
    b=a-b-b;
    printf("%d %d",a,b);
    printf("\n");
    c=c-d;
    c=c+d+d;
    d=c-d-d;
    printf("%0.1f %0.1f",c,d);

    return 0;
}
