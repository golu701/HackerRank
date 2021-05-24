#include <stdio.h>
#include <iostream>
#include <cmath>
void update(int *a,int *b) {
int c = *a;
    *a = *a + *b;
*b = fabs(c-*b);
    
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


/* 
//c++ 14
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
          int x=*a;
       *a=*a+*b;
       if(x>*b)
        *b=x-*b;
        else
        {
            *b=*b-x;
        }
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


 */