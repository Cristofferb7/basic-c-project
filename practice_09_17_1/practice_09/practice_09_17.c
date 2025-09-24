#include <stdio.h>
#include <stdlib.h>


enum months{
    JAN = 1, //0
    FEB, //1
    MARCH, //2
    APRIL, //3
    MAY, //4
    JUNE, //5 
    JULY,//6
    AUG,//7
    SEP,//8
    OCT, //9
    NOV,//10
    DEC, //11

};

int main(){


    enum months myFavMonth = JAN;
    enum months myNotFavMonth = OCT;

    printf("%d my favorite month\n", JAN);
    printf("%d my not favorite month\n", OCT);

    

}

