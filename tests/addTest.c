#include"../lib/simpleCalc.h"
#include"stdio.h"

int main(int argc, char** args){
    /* read out the two arguments */
    int result=0; /* return success by default */
    int a= 3;
    int b= 2;

    int c = add(a,b);
    if(c!=5) result=1; /* if the answer is not right fail the test */
    return result;
}