#include "gates.h"

int AND(int a, int b){
    return a && b;
}

int OR(int a, int b){
    return a || b;
}

int NOT(int a){
    return !a;
}

int NAND(int a, int b){
    return !(a && b);
}

int NOR(int a, int b){
    return !(a || b);
}

int XOR(int a, int b){
    return a ^ b;
}