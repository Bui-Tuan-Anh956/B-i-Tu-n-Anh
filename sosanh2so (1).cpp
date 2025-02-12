#include <stdio.h>
int main(){
	int a;
	int b;
	printf(" nhap a:");
	scanf("%d", &a);
	printf(" nhap b:");
	scanf("%d", &b);
	if( a < b){
		printf(" a be hon b ");
	}
	else if( a > b){
		printf(" a lon hon b");
	}
	else if( a == b){
		printf(" a bang b");
	}
	return 0;
}
