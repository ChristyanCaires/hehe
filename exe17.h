int exec17(){
    /**************************************
                
                EXERCICIO 17
                
    ***************************************/
    //Variaveis locais
    int i, j, cont, cont2, maior, menor;
    cont = 0;
    cont2 = 0;
    maior = 0;
    menor = 0;
    float mPreco = 0.00;
    float prdt[10] = {2.00, 3.2, 3.50, 4.80, 5.88, 6.80, 8.00, 78.90, 70.00, 80.00};
    int armz[5][10] = {
	    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	};
	//Preenchimento do Preco
    for(i = 0; i < 10; i++){
        printf("Digite o preco do produto %d:\tR$", (i+1));
	    scanf ("%f", &prdt[i]);
    }
    //Preenchimento do armazem
    for(i = 0; i < 5; i++){
        printf("\t\tEstoque do Armazem %d\n",(i+1));
        for(j = 0; j < 10;j++){
            printf("Digite a quantidade do Produto %d:\t", (j+1));
	        scanf ("%f", &armz[i][j]);
        }
    }
    
    //Total de Produtos em todos Armazens
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10;j++){
            cont = cont + armz[i][j];
        }
        printf("Total de Produtos no Armazem %d: %d\n",(i+1), cont);
        cont2 = cont2 + cont;
        cont = 0;
    }
    printf("\nTotal de Produtos em todos Armazens: %d\n\n", cont2);
    
    //Preço do produto com maior estoque
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10;j++){
            if(maior < armz[i][j]){
                maior = armz[i][j];
                mPreco = prdt[j];
            }
        }
        printf("Preço do produto com maior estoque no Armazem %d: %.2f\n",(i+1), mPreco);
        mPreco = 0;
        maior = 0;
    }
    
    //Menor Estoque armazenado
    menor = armz[0][0];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10;j++){
            if(menor > armz[i][j]){
                menor = armz[i][j];
            }
        }
    }
    printf("\nMenor estoque armazenado: %d\n\n",menor);
    
    mPreco = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10;j++){
            mPreco = mPreco + (armz[i][j] * prdt[j]);
        }
    }
    printf("Valor Total dos armazens: %.2f\n", mPreco);
    
    return 0;
}