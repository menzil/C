#include "stdio.h"
#include "math.h"
/*
给出已过不多于5位的正整数，要求：
1）求出它是几位数；
2）分别输出每一位数字；
3）按逆序输出个位数字，例如袁术是321，应输出123。
*/
int main(int argc, char const *argv[])
{
	int num,indiv,ten,hundred,thousand,ten_thousand,place;
	//分别代表各位，十位，百位，千位，万位和位数
	printf("请输入一个正整数（0-99999）:\n");
	scanf("%d",&num);
	if(num>9999)
		place = 5;
	else if(num>999)
		place = 4;
	else if (num > 99)
		place = 3;
	else if (num > 9)
		place = 2;
	else 
		place = 1;
	printf("位数： %d\n",place );
	printf("每位数字为:\n");
	// ten_thousand = num / 10000;
	// thousand = (int)(num -ten_thousand * 10000)/1000;
	// hundred = (int)(num-ten_thousand*1000-thousand*1000)/100;
	// ten = (int) (num - ten_thousand*10000 -thousand*1000-hundred*100)/10;
	// indiv = (int)(num -ten_thousand*10000 - thousand*1000-hundred*100-ten*10);

	ten_thousand = num / 10000;
	thousand = (int)(num % 10000)/1000;
	hundred = (int)(num%1000)/100;
	ten = (int) (num % 100)/10;
	indiv = (int)(num % 10);
	switch (place){
		case 5 : printf("%d,%d,%d,%d,%d\n",ten_thousand,thousand,hundred,ten,indiv);
		printf("\n 反序数字为：");
		printf("%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand);
		break;

		case 4 : printf("%d,%d,%d,%d\n",thousand,hundred,ten,indiv);
		printf("\n 反序数字为：");
		printf("%d%d%d%d\n",indiv,ten,hundred,thousand);
		break;
		case 3 : printf("%d,%d,%d\n",hundred,ten,indiv);
		printf("\n 反序数字为：");
		printf("%d%d%d\n",indiv,ten,hundred);
		break;
		case 2 : printf("%d,%d\n",ten,indiv );
		printf("\n 反序数字为：");
		printf("%d%d\n",indiv,ten);
		break;
		case 1 : printf("%d\n",indiv );
		printf("\n 反序数字为：");
		printf("%d\n",indiv);
		break;
	}
	return 0;
}