#include <stdio.h>
int main(){
	int a;
	printf(" nhap a:");
	scanf("%d", &a);
	if( a > 0){
		printf(" a la so duong");
	}
	else if( a == 0){
		printf(" a khong la duong, cung khong la am");
	}
	else{
		printf(" a la so am");
	}
}
