int exec13(){
    /**************************************
                
                EXERCICIO 13
                
    ***************************************/
    //Variaveis locais
    int n1 = 0;
    int n2 = 1;
    int cont, i, j, s;
    while(n1 != n2){
        do{
            printf("Digite o valor de x:\t");
            scanf ("%i", &n1);
            //recebendo valor 2
            printf("Digite o valor de y:\t");
            scanf ("%i", &n2);
        }while((n1 <= 0) && (n2 <= 0));
        if(n1 == n2){
            break;
        }else{
            
            for (i = n1; i <= n2; i++){
                for (j = 1; j <= i; j++){
                    if (i % j == 0) { 
                        cont++;
                    }
                }
                
                if(cont == 2){
                    printf("%d é primo\n", i);
                    cont = 0;
                    s = s + i;
                }else{
                    cont = 0;
                }
            }
            printf("Somatoria total: %d\n", s);
        }
    }
    return 0;
}