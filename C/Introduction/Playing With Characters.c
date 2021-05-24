#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c;
    char s[100],sen[100];
    scanf("%c",&c);
    scanf("\n");
    scanf("%[^\n]%*c",&s);
    scanf("%[^\n]%*c",&sen);
    printf("%c\n%s\n%s",c,s,sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
