/*编写一个程序，要求提示输入一个ASCII码值，然后打印输入的字符*/
#include <stdio.h>

int main(void)
{
    int ascii;
    printf("请输入一个ASCII值\n");
    scanf("%d",&ascii);
    printf("%d is the ASCII code for %c\n",ascii,ascii);
    return 0;
}
