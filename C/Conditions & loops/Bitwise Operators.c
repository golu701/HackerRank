#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int b,c,d,x=0,y=0,z=0;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            b=i&j;
            c=i|j;
            d=i^j;
            if(i!=j)
            {
                if((b>x)&&(b<k))
                {
                    x=b;
                }
                if((c>y)&&(c<k))
                {
                    y=c;
                }
                if((d>z)&&(d<k))
                {

                    z=d;
                }
            }


        }
    }
    printf("%d\n%d\n%d",x,y,z);
}

int main() {
    int n, k;
   
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
