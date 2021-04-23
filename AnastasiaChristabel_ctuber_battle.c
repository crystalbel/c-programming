#include <stdio.h>

float damage(int a, int b);
float combat(int a, int b, int c, int d);
void toString();
int fp, rof, acc, eva;
int fp1, rof1, acc1, eva1;
char nama[20];
char nama_en[20];
int lanjut;

int main(){
	int dps, ce;
	lanjut = 1;
	
	while(lanjut == 1){
		printf("\n#### MY CTUBER ####");
		printf("\nMasukkan nama Ctuber: ");
		scanf("%s", nama);
		printf("\nMasukkan Firepower: ");
		scanf("%d", &fp);
		printf("\nMasukkan Rate of Fire: ");
		scanf("%d", &rof);
		printf("\nMasukkan Accuracy: ");
		scanf("%d", &acc);
		printf("\nMasukkan Evation: ");
		scanf("%d", &eva);
		
		printf("\n#### ENEMY CTUBER ####");
		printf("\nMasukkan nama Ctuber: ");
		scanf("%s", nama_en);
		printf("\nMasukkan Firepower: ");
		scanf("%d", &fp1);
		printf("\nMasukkan Rate of Fire: ");
		scanf("%d", &rof1);
		printf("\nMasukkan Accuracy: ");
		scanf("%d", &acc1);
		printf("\nMasukkan Evation: ");
		scanf("%d", &eva1);
			
		if(fp < 0 || rof < 0 || acc < 0 || eva < 0 || fp1 < 0 || rof1 < 0|| acc1 < 0|| eva1 < 0){
			printf("\nError input yang dimasukkan tidak tepat");
			printf("\nLanjut?");
			scanf("%d", &lanjut);
		}
		else{
			toString();
		}
	}
	return 0;
}

float damage(int x, int y){
	return (float)(x * y) / 60;
}

float combat(int p, int q, int r, int s){
	return (30 *(float) p) + ((float)(q * q) / 3) + (15 * (float)(r + s));	
}

void toString(){
	float damageps, combef;
	float damageps1, combef1;
		
	printf("\n#### RESULT ####");
	
	printf("\n%s", nama);
	damageps = damage(fp, rof); 
	printf("\nDamage Per Second = %.2f", damageps);
	combef = combat(fp, rof, acc, eva);
	printf("\nCombat Effectiveness = %.2f", combef);
	
	printf("\n\n%s", nama_en);
	damageps1 = damage(fp1, rof1); 
	printf("\nDamage Per Second = %.2f", damageps1);
	combef1 = combat(fp1, rof1, acc1, eva1);
	printf("\nCombat Effectiveness = %.2f", combef1);
	
	if(damageps >= damageps1 && combef >= combef1){
		printf("\nGas Lawan");
	}
	else{
		printf("\nKaburrr");
	}
	
	printf("\nLanjut?");
	scanf("%d", &lanjut);
}
