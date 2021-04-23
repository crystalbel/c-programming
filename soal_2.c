#include <stdio.h>

int main(){
	float STR, AGI, MP;
	
	printf("Strenght\t\t: ");
	scanf("%f", &STR);
	printf("Agility\t\t\t: ");
	scanf("%f", &AGI);
	printf("Mana Power\t\t: ");
	scanf("%f", &MP);
	
	printf("Damage per Second\t: %.2f", (STR + AGI) * MP * MP / 2);
	
	return 0;
}
