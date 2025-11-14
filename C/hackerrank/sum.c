#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float fl1,fl2;
    scanf("%d %d",&a,&b);
	scanf("%f %f",&fl1,&fl2);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f\n",fl1+fl2,fl1-fl2);
    return 0;
}