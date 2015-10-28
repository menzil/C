#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("please input a,b,c(以逗号分隔):\n");
	scanf("%d,%d,%d",&a,&b,&c);
	max = a;
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	printf("The Largest Number is %d \n", max);
	
	return 0;
}