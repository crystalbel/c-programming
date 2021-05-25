//Nama 	: Anastasia Christabel Arif
//NPM 	: 2006578305 

#include <stdio.h>
#include <stdlib.h>

int n;
int **get(int N);
void enterData(int **p, int N, int a);
void display(int **p, int N);
void addMatrices(int **p, int **q, int N);
void freeMemory(int **p, int N);

int main(void)
{
    int **p, **q;

    printf("Input size of matrix:");
    scanf("%d", &n);

    //Pengalokasian memory dengan memanggil fungsi get
    p = get(n);
    q = get(n);

    //Input data pada matrix
    enterData(p, n, 1);
    enterData(q, n, 2);

    //Memanggil fungsi untuk menjumlahkan matrix
    addMatrices(p, q, n);

    //Memanggil fungsi untuk meng-print hasil penjumlahan matrix
    display(p, n);

    //Memanggil fungsi untuk mengosongkan memory yang telah dialokasikan
    freeMemory(q, n);
    freeMemory(p, n);

    printf("\nEnter any key to stop the program");
    getch();
    return 0;
}

// Fungsi untuk mengalokasikan memory berupa 2D array pada memory stack
// Fungsi ini akan meng-return variabel pointer bernama array
int **get(int N)
{
    int i, **array;
    array = malloc(N * sizeof(int *));
    for (i = 0; i < N; i++)
        array[i] = malloc(N * sizeof(int));
    if(array == NULL){
    	printf("Memory is not allocated");
    	exit(0);
	}
	else{
		return array;
	}
}

//Fungsi untuk menginput data pada matrix
void enterData(int **p, int N, int a){
    int i, j;
    printf("\nInput Matrix%d\n", a);
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Matrix%d[%d][%d]:", a, i, j);
            scanf("%d", &p[i][j]);
        }
    }
}

//Fungsi untuk menjumlahkan matrix
void addMatrices(int **p, int **q, int N){
    printf("\nResult:\n");
    int i, j;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            p[i][j] += q[i][j];
        }
    }
}

//Fungsi untuk print hasil penjumlahan matrix
void display(int **p, int N){
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            printf("ResultMatrix[%d][%d] = %d\n", i, j, p[i][j]);
}

//Fungsi untuk mengosongkan memori yang telah dialokasikan
void freeMemory(int **p, int N){
    int i;
    for (i = 0; i < N; i++)
        free(p[i]);
    free(p);
}
