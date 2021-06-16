#include <stdio.h>
#include <stdlib.h>
int i;
int luas[3];
struct field
{
    char nama[20];
    int panjang_field;
    int lebar_field;
    int panjang_jarak;
    int lebar_jarak;
} * field_ptr;

void input(struct field *ptr);
void luas_field(struct field *ptr);
void jumlah(struct field *ptr);

int main()
{
    printf("Penghitung Luas Lahan dan Jumlah Tanaman yang Bisa Ditanam");
    field_ptr = (struct field *)malloc(3 * sizeof(struct field));

    input(field_ptr);

    printf("\nLuas Tiap Lahan");
    luas_field(field_ptr);

    printf("\n\nJumlah Tanaman yang Bisa Ditanam");
    jumlah(field_ptr);

    return 0;
}

void input(struct field *ptr)
{
    for (i = 0; i < 3; i++)
    {
        printf("\nField-%d", i + 1);
        printf("\nNama tanaman: ");
        scanf("%s", (ptr + i)->nama);
        printf("Panjang field (m): ");
        scanf("%d", &(ptr + i)->panjang_field);
        printf("Lebar field (m): ");
        scanf("%d", &(ptr + i)->lebar_field);
        printf("Panjang jarak antartanaman (m): ");
        scanf("%d", &(ptr + i)->panjang_jarak);
        printf("Lebar jarak antartanaman (m): ");
        scanf("%d", &(ptr + i)->lebar_jarak);
    }
}

void luas_field(struct field *ptr)
{
    int luas[3];
    for (i = 0; i < 3; i++)
    {
        luas[i] = (ptr + i)->panjang_field * (ptr + i)->lebar_field;
        printf("\nField-%d: %d", i + 1, luas[i]);
    }
}

void jumlah(struct field *ptr)
{
    int jumlah[3];
    int panjang[3] = {0};
    int lebar[3] = {0};
    int pjg_jrk[3] = {0};
    int lbr_jrk[3] = {0};
    for (i = 0; i < 3; i++)
    {
        pjg_jrk[i] = (ptr + i)->panjang_jarak;
        lbr_jrk[i] = (ptr + i)->lebar_jarak;
        while ((ptr + i)->panjang_jarak < (ptr + i)->panjang_field)
        {
            panjang[i] += 1;
            (ptr + i)->panjang_jarak += pjg_jrk[i];
        }
        while ((ptr + i)->lebar_jarak < (ptr + i)->lebar_field)
        {
            lebar[i] += 1;
            (ptr + i)->lebar_jarak += lbr_jrk[i];
        }
        jumlah[i] = panjang[i] * lebar[i];
        printf("\nField-%d: %d", i + 1, jumlah[i]);
    }
}