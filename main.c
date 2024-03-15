#include <stdio.h>
#include <stdlib.h>
#include "functii.h"

int main() {
    int index;
    printf("**************************\n\n");
    printf("      Meniu comenzi\n\n");
    printf("**************************\n\n");
    printf("      1.Afisare meniu\n");
    printf("      2.Adunare vectori\n");
    printf("      3.Trace\n");
    printf("      4.Determinant 2x2/3x3\n");
    printf("      5.Produs scalar\n");
    printf("      6.Inmultire matrice-vector\n");
    printf("      7.Inmultire matrice-matrice\n");
    printf("      8.Transpusa unei matrici\n");
    printf("      9.Rotire matrice spre dreapta\n");
    printf("      10.Memorare matrici rare\n");
    printf("      11.Informatii matrice\n");
    printf("      12.Inchidere aplicatie\n\n");

    while(1) {
        printf("Introduceti la tastatura indexul comenzii dorite:\n");
        scanf("%d", &index);
        switch (index) {
        case 1:
            printf("**************************\n\n");
            printf("      Meniu operatii\n\n");
            printf("**************************\n\n");
            printf("      1.Afisare meniu\n");
            printf("      2.Adunare vectori\n");
            printf("      3.Trace\n");
            printf("      4.Determinant 2x2/3x3\n");
            printf("      5.Produs scalar\n");
            printf("      6.Inmultire matrice-vector\n");
            printf("      7.Inmultire matrice-matrice\n");
            printf("      8.Transpusa unei matrici\n");
            printf("      9.Rotire matrice spre dreapta\n");
            printf("      10.Memorare matrici rare\n");
            printf("      11.Informatii matrice\n");
            printf("      12.Inchidere aplicatie\n\n");

            break;
        case 2:
            operatii_vectori();
            break;
        case 3:
            trace();
            break;
        case 4:
            determinant();
            break;
        case 5:
            produs_scalar();
            break;
        case 6:
            inmultire_matrice_vector();
            break;
        case 7:
            inmultire_matrice_matrice();
            break;
        case 8:
            transpusa_matricei();
            break;
        case 9:
            rotire_spre_dreapta();
            break;
        case 10:
            memorare_matrici_rare();
            break;
        case 11:
            informatii_matrice();
            break;
        case 12:
            return 0;
            break;
        default:
            printf("Index nevalid!\a\n");
            fflush(stdin);
        }
    }

    return 0;
}
