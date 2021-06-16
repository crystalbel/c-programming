#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i;

struct rocket
{
    char name[50];
    char size[10];
    int mesin;
    int booster;
    char negara[50];
} * rocket_ptr;

void input(struct rocket *ptr);

int main()
{
    rocket_ptr = (struct rocket *)malloc(3 * sizeof(struct rocket));
    int total_cost = 0;
    int cost[3] = {0};

    input(rocket_ptr);

    for (i = 0; i < 3; i++)
    {
        if (strcmp((rocket_ptr + i)->size, "Large") == 0)
        {
            cost[i] += 1000000;
        }
        else if (strcmp((rocket_ptr + i)->size, "Medium") == 0)
        {
            cost[i] += 500000;
        }
        else if (strcmp((rocket_ptr + i)->size, "Small") == 0)
        {
            cost[i] += 300000;
        }
    }

    for (i = 0; i < 3; i++)
    {
        cost[i] += ((rocket_ptr + i)->mesin * 500000) + ((rocket_ptr + i)->booster * 700000);
        if (strcmp((rocket_ptr + i)->negara, "USA") == 0)
        {
            cost[i] = cost[i] * 0.8;
        }
        total_cost += cost[i];
    }

    printf("\n=== HASIL HITUNGAN COST ===\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s ($ %d)\n", (rocket_ptr + i)->name, cost[i]);
    }

    printf("Total cost: %d", total_cost);
    return 0;
}

void input(struct rocket *ptr)
{
    for (i = 0; i < 3; i++)
    {
        printf("\nNama roket %d: ", i + 1);
        scanf("%s", (ptr + i)->name);
        printf("Ukuran roket: ");
        scanf("%s", (ptr + i)->size);
        printf("Jumlah mesin roket: ");
        scanf("%d", &(ptr + i)->mesin);
        printf("Jumlah booster roket: ");
        scanf("%d", &(ptr + i)->booster);
        printf("Negara pemilik roket: ");
        scanf("%s", (ptr + i)->negara);
    }
}
