#include <stdio.h>
int main(){
	int number;
	printf("Nhap so n:");
	scanf("%d",&number);
	if(number%3==0 && number%5==0){
		printf("%d chia het cho 3 va 5\n",number);
	}else{
		printf("%d khong chia het cho 3 va 5\n",number);
	}
}
	
