#include <stdio.h>
#include "gates.h"

int main(){

    int choice;
    int A,B;

    printf("Logic Gate Simulator\n");
    printf("1. AND\n");
    printf("2. OR\n");
    printf("3. XOR\n");
    printf("4. NAND\n");
    printf("5. NOR\n");
    printf("6. NOT\n");

    printf("Choose a gate: ");
    scanf("%d",&choice);

    if(choice == 6){

        printf("A | OUTPUT\n");

        for(A=0;A<=1;A++){
            printf("%d | %d\n",A,NOT(A));
        }

    }else{

        printf("A B | OUTPUT\n");

        for(A=0;A<=1;A++){
            for(B=0;B<=1;B++){

                int output;

                if(choice==1)
                    output = AND(A,B);

                else if(choice==2)
                    output = OR(A,B);

                else if(choice==3)
                    output = XOR(A,B);

                else if(choice==4)
                    output = NAND(A,B);

                else if(choice==5)
                    output = NOR(A,B);

                else{
                    printf("Invalid choice\n");
                    return 0;
                }

                printf("%d %d | %d\n",A,B,output);

            }
        }

    }

    return 0;
}