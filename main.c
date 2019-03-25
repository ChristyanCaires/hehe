/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include "exe01.h";
#include "exe02.h";
#include "exe03.h";
#include "exe04.h";
#include "exe05.h";
#include "exe06.h";
#include "exe07.h";
#include "exe08.h";
#include "exe09.h";
#include "exe10.h";
#include "exe11.h";
#include "exe12.h";
#include "exe13.h";
#include "exe14.h";
#include "exe15.h";
#include "exe16.h";
#include "exe17.h";

int main(){
    int continuar = 1;
    int i=0;
    do {
        printf("\n\tSelecione o Exercicio\n\n");
        
        for(i = 1; i < 18; i++){
            printf("%d. Exercicio %d\n", i, i);
        }
    
        printf("0. Sair\n");
        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar){
            case 1:
                exec01();
                break;

            case 2:
                exec02();
                break;

            case 3:
                exec03();
                break;
			
			case 4:
				exec04();
				break;
            case 5:
                exec05();
            break;
            
            case 6:
                exec06();
            break;
            
            case 7:
                exec07();
            break;
            
            case 8:
                exec08();
            break;
            
            case 9:
                exec09();
            break;
            
            case 10:
                exec10();
            break;
            
            case 11:
                exec11();
            break;
            
            case 12:
                exec12(3600);
            break;
            
            case 13:
                exec13();
            break;
            
            case 14:
                exec14();
            break;
            
            case 15:
                exec15();
            break;
            
            case 16:
                exec16();
            break;
            
            case 17:
                exec17();
            break;
            
			case 0:
                exit(0);
            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
    return 0;
}




























