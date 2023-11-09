#include <stdio.h>
int main(){
	int a, b, c ;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	printf("nhap so c:");
	scanf("%d",&c);
		if(a==b && b==c && a==c){
		printf("Canh a,b,c tao nen tam giac deu");
	} else if( a==b || b==c || a==c ){
		if((a^2) + (b^2) == (c^2) || (a^2) + (c^2) == (b^2) || (b^2) + (c^2) == (a^2)){
		printf("Canh a,b,c tao nen tam giac vuong can");}
		else
		printf("Canh a,b,c tao nen tam giac can");
	} else if((a^2) + (b^2) == (c^2) || (a^2) + (c^2) == (b^2) || (b^2) + (c^2) == (a^2)){
		printf("Canh a,b,c tao nen tam giac vuong");
	} else if( a+b>c && b+c>a && a+c>b){
	    printf("Canh a,b,c tao nen tam giac thuong");
	} else printf("Canh a,b,c khong tao nen tam giac");
}
