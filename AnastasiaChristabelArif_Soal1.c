#include <stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int n_perintah;
	int count = 0;
	char perintah;
	
	printf("Masukkan banyak perintah:");
	scanf("%d", &n_perintah);
	
	if(n_perintah >= 0){
		while(count < n_perintah){
			printf("\nMasukkan perintah:");
			scanf(" %c", &perintah);
			
			if(perintah == 'U'){
				y = y + 1;
			}
			else if(perintah == 'S'){
				y = y - 1;
			}
			else if(perintah == 'T'){
				x = x + 1;
			}
			else if(perintah == 'B'){
				x = x - 1;
			}
			else if(perintah == 'H'){
				break;
			}
			else{
				printf("\nPosisi meong bros tetap");
			}
			
			count = count + 1;
		}
		printf("\nKarakter Meong Bros berada di koordinat (x = %d, y = %d)", x, y);
	}
	else{
		printf("\nBanyak perintah harus bilangan positif");
	}
	return 0;
}
