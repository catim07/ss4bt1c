#include<stdio.h>
int main(){
	int a;
	printf("moi ban nhap so: ");
	scanf("%d",&a);
	if(a>0){
		printf("so ban nhap la so duong");
	}else if(a<0){
		printf("so ban da nhap la so am");
	}else{
		printf("so ban nhap la so 0");
	}
	return 0;
}
