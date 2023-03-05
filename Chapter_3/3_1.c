/* 观察系统如何处理整数上溢，浮点数上溢和浮点数下溢的*/
#include <stdio.h>

int main(void)
{
    unsigned int a = 66666666;
    float b = 2.0E38;
    float c = b * 10;
    float d = 0.6666E-2;
    printf("%u+1 = %u\n", a, a+1);
    printf("%e*10 = %e\n", b, c);
    printf("%f/10 = %f\n", d, d / 10);
    getchar();
    return 0;

}