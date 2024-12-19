#include <stdio.h>

int main()
{
    int x, y, z, n, Jumlah = 0;
    int Matriks1[10][10], Matriks2[10][10], Hasil[10][10];
    scanf("%d", &n);

    printf("Matriks A\n");
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            scanf("%d", &Matriks1[x][y]);
        }
    }

    printf("Matriks B\n");
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            scanf("%d", &Matriks2[x][y]);
        }
    }
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            for (z = 0; z < n; z++)
            {
                Jumlah = Jumlah + Matriks1[x][z] * Matriks2[z][y];
            }
            Hasil[x][y] = Jumlah;
            Jumlah = 0;
        }
    }

    printf("Matriks AXB\n");
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            printf("%d ", Hasil[x][y]);
        }
        printf("\n");
    }
    return 0;
}