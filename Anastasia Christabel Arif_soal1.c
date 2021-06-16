#include <stdio.h>

int main(){
	int i, j;
	int input[5][5];
	int result = 0;
	
	printf("Masukkan Data:\n");

// for loop ini untuk meng-scan input matrix 5x5 dari user
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			scanf("%d", &input[i][j]);
		}
	}

// for loop ini untuk menghitung hasil dari pengurangan elemen-elemen matrix yang berada di atas diagonal
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(j > i){
				result -= input[i][j];
			}
		}
	}
	
// menampilkan hasil pengurangan elemen-elemen matrix yang berada di atas diagonal	
	printf("Hasil pengurangan dari setiap element diagonal adalah: %d", result);
	return 0;
}
