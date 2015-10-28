#include "stdio.h"
int main(int argc, char const *argv[])
{
	char c1,c2;
	printf("请输入两个字符 c1,c2:\n");
	c1 = getchar();
	c2 = getchar();
	printf("用putchar 语句输出结果为：\n");
	putchar(c1);
	putchar(c2);
	printf("用printf输出的结果为：\n");
	printf("%c %c \n",c1,c2 );
	return 0;
}