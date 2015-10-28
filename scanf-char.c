#include <stdio.h>
int main(int argc, char const *argv[])
{
	// 用键盘扫描使a=3,b=7,x=8.5,y=71.82,c1='A',c2='a'

	printf("a=3,b=7,x=8.5,y=71.82,c1='A',c2='a' \n");
	printf("请按照上面输入a,b,x,y,c1,c2的值： \n");
	
	char c1,c2;
	
	scanf("%c,%c",&c1,&c2);
	printf("c1=%c,c2=%c\n",c1,c2 );
	return 0;
}