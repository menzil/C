#include <stdio.h>
int main(){
	printf("please input 5 integer number: \n");
	int n = 1;
	int max = 0x80000000;  //所有整数里最小
	int a;

	while(n<5){
		n++;
		scanf("%d",&a);

		if(max<a){
			max = a;
		}
	}
	printf("max= %d \n",max );
	return max;
}