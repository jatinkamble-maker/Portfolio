#include <stdio.h>

int main() {
    int a = 5, b = 10;
    scanf("%d %d",&a,&b);
    printf("before swapping %d %d\n",a,b);
    (a=b);
    a=a+b;
    printf("after swapping %d %d\n",b,a);
    return 0;
}
