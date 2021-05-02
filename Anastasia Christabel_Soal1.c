#include <stdio.h>
#include <string.h>


int vokal = 0;
int proses(char x[20]);
void toString(int v, int pal);
char input[20];
int pal = 0;

int main(){
    char flip[20];
    // 1#__Input/Output
    printf("Input : ");
    gets(input);

    strlwr(input);       //untuk membuat semua character yang di input menjadi lower case
    strcpy(flip, input); //untuk mengcopy string yang ada di array input ke array flip

    /*
 Q : Apa fungsi code if(strcmp(strrev(#__Variable2), #__Variable1) == 0)? 
 A : Untuk meng-reverse string pada #__Variable2 kemudian setelah di reverse urutannya, dibandingkan hasil reverse dari #__Variable2
 dengan #__Variable1, apabila hasil reverse #__Variable2 sama dengan #__Variable1, strcmp akan meng-return 0, maka if nya menjadi
 bernilai true karena 0 == 0 dan menjalankan code di dalamnya.
 */

    if (strcmp(strrev(flip), input) == 0){
    	pal = 1;
    	toString(vokal, pal);
    }
    else{
        proses(input);
        toString(vokal, pal);
    }
    return 0;
}

void toString(int v, int pal){
    // Untuk meng-print jumlah vokal apabila string bukan palindrom atau meng-print "Palindrom" apabila palindrom
    // 3#__Print palindrom atau print Jumlah Vokal
    if(pal == 1){
    	printf("Palindrom");
	}
	else{
		printf("Jumlah Vokal : %d", v);
	}
}

int proses(char x[20]){
	//Untuk menghitung jumlah huruf vokal yang ada apabila string bukan palindrom dan meng-return nilai vokal
    // 2#__Proses hitung jumlah huruf Vokal
    int i = 0;
    while (x[i] != '\0'){
        if (x[i] == 97 || x[i] == 105 || x[i] == 117 || x[i] == 101 || x[i] == 111){
            vokal ++;
        }
        i++;
    }
    return vokal;
    //abis itung jumlah dibalikin ke void tostring
}
