#include <stdio.h>
const int MAX = 3;
int main()
{
    int a[] = {10, 100, 200};
    int i, *p;
    p = &a[MAX-1];
    for(i = MAX; i > 0; i--)
    {
        printf("address: a[%d] = %x\n", i, p);
        printf("value: a[%d] = %d\n", i, *p);
        p--;
    }
    return 0;
}