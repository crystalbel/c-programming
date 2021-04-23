#include <stdio.h>

int main(){
	int baris;
	int pattern;
	int i,j;
	int keluar = 1;
	
	do{
	printf("Masukkan banyak baris resolusi:");
	scanf("%d", &baris);
	printf("\nMasukkan pilihan pattern:\n\t1. 0 dan /\n\t2. $ dan =\nPilihan Anda:");
	scanf("%d", &pattern);
	
		if(baris > 0){
				switch(pattern){
				case 1:
						for(i = 1; i <= baris; i++){
							for(j = 1; j <= baris; j++){
								if(i == 1 || i == baris){
									printf("0");
								}
								else if(j == 1 || j == baris){
									printf("0");
								}
								else if(j == i || (j == baris - i + 1)){
		                		printf("0");
		            			}
		            			else{
		                		printf("/");
		            			}
							}
						printf("\n");
					}
					printf("Masukkan 0 untuk keluar ");
					scanf("%d", &keluar);
					break;
				case 2:
						for(i = 1; i <= baris; i++){
							for(j = 1; j <= baris; j++){
								if(i == 1 || i == baris){
									printf("$");
								}
								else if(j == 1 || j == baris){
									printf("$");
								}
								else if(j == i || (j == baris - i + 1)){
		                		printf("$");
		            			}
		            			else{
		                		printf("=");
		            			}
							}
						printf("\n");
					}
					printf("Masukkan 0 untuk keluar ");
					scanf("%d", &keluar);
					break;
				default :
					printf("Harus memilih antara 1 atau 2");
				}
		}
		else{
			printf("Baris harus angka positif >0");
		}
	}while (keluar == 1); 
	return 0;	
}

