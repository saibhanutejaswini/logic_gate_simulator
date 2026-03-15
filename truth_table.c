#include <stdio.h>
#include "gates.h"

int main(){

    int A,B;

    printf("A B | AND OR XOR\n");

    for(A=0;A<=1;A++){
        for(B=0;B<=1;B++){
            printf("%d %d |  %d   %d   %d\n",
            A,B,
            AND(A,B),
            OR(A,B),
            XOR(A,B));
        }
    }

}