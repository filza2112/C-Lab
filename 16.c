#include <stdio.h>

void sm(int m1[3][3], int m2[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = m1[i][j] + m2[i][j];
}


void rd(int m[3][3]) {
    printf("Enter the elements of 3*3 matrix :\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
}

int srd(int m[3][3]) {
    int s = 0;
    for (int i = 0; i < 3; i++)
        s += m[i][2 - i];
    return s;
}

void mm(int m1[3][3], int m2[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            r[i][j] = 0;
            for (int k = 0; k < 3; k++)
                r[i][j] += m1[i][k] * m2[k][j];
        }
}

void tm(int m[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = m[j][i];
}


void src(int m[3][3]) {
    int rs[3] = {0};
    int cs[3] = {0};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            rs[i] += m[i][j];
            cs[j] += m[i][j];
        }

    printf("Sum of rows: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", rs[i]);
    printf("\n");

    printf("Sum of columns: ");
    for (int j = 0; j < 3; j++)
        printf("%d ", cs[j]);
    printf("\n");
}

void plt(int m[3][3]) {
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            if (i >= j)
                printf("%d ", m[i][j]);
            else
                printf("0 ");
        printf("\n");
    }
}

void put(int m[3][3]) {
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            if (i <= j)
                printf("%d ", m[i][j]);
            else
                printf("0 ");
        printf("\n");
    }
}

int iss(int m[3][3]) {
    int zc = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (m[i][j] == 0)
                zc++;

    return (zc > (3 * 3) / 2);
}

int fromo(int m[3][3]) {
    int mo = 0;
    int rwmo = -1;
    for (int i = 0; i < 3; i++) {
        int oi = 0;
        for (int j = 0; j < 3; j++)
            if (m[i][j] == 1)
                oi++;
        if (oi > mo) {
            mo = oi;
            rwmo = i;
        }
    }
    return rwmo;
}

int main() {
    int m1[3][3], m2[3][3], r[3][3], t[3][3];

    printf("Matrix 1:\n");
    rd(m1);

    printf("Matrix 2:\n");
    rd(m2);

    printf("\n");

    sm(m1, m2, r);
    printf("Sum of two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", r[i][j]);
        printf("\n");
    }
    printf("\n");

    mm(m1, m2, r);
    printf("Product of two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", r[i][j]);
        printf("\n");
    }
    printf("\n");

    tm(m1, t);
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("Sum of right diagonals: %d\n", srd(m1));

    src(m1);
    plt(m1);
    put(m1);

    if (iss(m1))
        printf("\nsparse Matrix!.\n");
    else
        printf("\nNot sparse!.\n");

    int rwm = fromo(m1);
    if (rwm != -1)
        printf("Row with the max 1s: %d\n", rwm + 1);
    else
        printf("No row with 1s is there.\n");

    return 0;
}
