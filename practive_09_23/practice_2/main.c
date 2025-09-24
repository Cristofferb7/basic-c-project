#include <stdio.h>
#include <stdlib.h>


int main(){


for ( int x = 0 ; x < 10; x++)
{
    printf("X");
}

    printf("\n");

for (int row = 1; row <= 8; row++) {
    // print spaces first
    for (int space = 1; space <= (9 - row); space++) {
        printf(" ");
    }

    // then print the diagonal "X"
    printf("X\n");

}

 // 3. Bottom border
    for (int i = 0; i < 10; i++) {
        printf("X");
    }
    printf("\n");

    return 0;
}

    
    





















