#include <stdio.h>

int main(){
	int umur;
	
	printf("Masukkan umurmu = ");
	scanf("%d",&umur);
	
	printf("\n\nNama saya: \t\tAnastasia Christabel Arif \n\nNama Panggilan saya: \tAnas");
	printf("\n\nUmur : \t\t\t%d Tahun", umur + 3);
	
	if(umur + 3 > 20){
		printf("\n\nBayar : 5000 mora");
	}
	
	return 0;
}
