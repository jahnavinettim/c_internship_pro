#include <stdio.h>
#include <stdlib.h> 

int printJ[7][5];
int printA[7][5];
int printH[7][5];
int printN[7][5];
int printA1[7][5]; 
int printV[7][5];
int printI[7][5];

void gap() {
	for (int j = 0; j < 2; j++) {
        printf(" ");
    }
}

void printConsole() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            char ch = printJ[i][j];
            printf("%c", ch);
        }
        gap();
        for (int j = 0; j < 5; j++) {
            char ch = printA[i][j];
            printf("%c", ch);
        }
        gap();
        for (int j = 0; j < 5; j++) {
            char ch = printH[i][j];
            printf("%c", ch);
        }
        gap();
        for (int j = 0; j < 5; j++) {
            char ch = printN[i][j];
            printf("%c", ch);
        }
        gap();
        for (int j = 0; j < 5; j++) {
            char ch = printA[i][j];
            printf("%c", ch);
        }
        gap();
        for (int j = 0; j < 5; j++) {
            char ch = printV[i][j];
            printf("%c", ch);
        }
        gap();
        for (int j = 0; j < 5; j++) {
            char ch = printI[i][j];
            printf("%c", ch);
        }

        printf("\n");
    }
}

void J() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 3 || i == 6 && j != 4 || i == 4 && j != 1 && j != 2 && j != 4 || i == 5 && j != 1 && j != 2 && j != 4) {
                printJ[i][j] = '*'; 
            } else {
                printJ[i][j] = ' ';
            }
        }
    }
}

void A() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (((j == 0 || j == 4) && (i != 0)) || ((i == 0 || i == 3) && (j > 0 && j < 4))) {
                printA[i][j] = '*'; 
            } else {
                printA[i][j] = ' ';
            }
        }
    }
}

void H() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == 3) {
                printH[i][j] = '*'; 
            } else {
                printH[i][j] = ' ';
            }
        }
    }
}

void N() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || i == 0 && j == 0 || i == 1 && j == 1 || i == 2 && j == 2 || i == 3 && j == 3 || i == 4 && j == 4 || j == 4) {
                printN[i][j] = '*'; 
            } else {
                printN[i][j] = ' ';
            }
        }
    }
}

void V() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 && j != 1 && j != 2 && j != 3 || i == 1 && j != 1 && j != 2 && j != 3 || i == 2 && j != 1 && j != 2 && j != 3 || i == 3 && j != 1 && j != 2 && j != 3 || i == 4 && j != 1 && j != 2 && j != 3 || i == 5 && j != 0 && j != 2 && j != 4 || i == 6 && j != 0 && j != 1 && j != 3 && j != 4) {
                printV[i][j] = '*'; 
            } else {
                printV[i][j] = ' ';
            }
        }
    }
}

void I() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || j == 2 || i == 6)) {
                printI[i][j] = '*'; 
            } else {
                printI[i][j] = ' ';
            }
        }
    }
}

int main() {
    J();
    A();
    H();
    N();
    A();
    V();
    I();

    printConsole();

    return 0; 
}

