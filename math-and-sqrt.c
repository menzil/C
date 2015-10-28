#include "stdio.h"
#include "math.h"

#define M 1000 // 注意，不能写成 M = 1000；

int main(int argc, char const *argv[])
{
	int i,k;
	printf("请输入一个小于%d 的整数 i: \n",M );
	scanf("%d",&i);
	while(i>M){
		printf("输入的数据不符合要求，请重新输入一个小于%d 的整数 i: \n",M);
		scanf("%d",&i);
		k = sqrt(i); //求平方根的函数
	}
	printf("%d 的平方根的整数部分是: %d\n",i,k );

	return 0;
}