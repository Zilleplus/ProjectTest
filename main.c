#include<stdio.h>
#include"./lib/simpleCalc.h"


int main(int argc,char** args){
    printf("Simple demo of CTest framework");
    int a =1;
    int b =2;
    int c = add(a,b);

    printf("\n %i",c);
}

/*
 * use the following command to generate the make file on windows with MINGW
 * cmake . -G "MinGW Makefiles" 
 */