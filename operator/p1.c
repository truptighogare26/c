#include <stdio.h>
int main()
{
    int x = 10, y;
 
    // The following is equivalent
    // to y = x + 2 and x += 3,
    // with two printings
    y = (x++,printf("x = %d\n", x),++x, printf("x = %d\n", x),x++);
 
    // Note that last expression is evaluated
    // but side effect is not updated to y
    printf("y = %d\n", y);
    printf("x = %d\n", x);
   
   
    int a=1;
    int b=2;
    printf("%d\n",a&b);
    printf("%d",a&&b);
 
    return 0;
}
