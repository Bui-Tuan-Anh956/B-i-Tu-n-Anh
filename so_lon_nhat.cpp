#include <stdio.h>
int main(){
	int a, b, c;
	printf(" tim gia tri lon nhat trong 3 khac nhau so\n");
	printf(" nhap so:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if( (a < b && b < c) || ( b < a && a < c) ){
		printf("%d la so lon nhat", c);
	}
	else if(( c < b && b < a) || (b < c && c < a)){
		printf(" %d la so lon nhat", a);
	}
	else if(( c < a && a < b) || (a < c && c < b)){
		printf(" %d la so lon nhat", b);
	}
	return 0;
}
