#include<stdio.h>
#include<stdlib.h>
#include"./lib/simpleCalc.h"


int main(int argc,char** args){
    printf("Simple demo of CTest framework \n");
    
    int a =atoi(args[1]);
    int b =atoi(args[2]);
    int c = add(a,b);

    printf("Adding %d and %d \n",a,b);
    printf("result=%d \n",c);
}

/*
 * use the following command to generate the make file on windows with MINGW
 * cmake . -G "MinGW Makefiles" 
 */