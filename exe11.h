int exec11(){
    /**************************************
                
                EXERCICIO 11
                
    ***************************************/
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int cont = 0;
    int result = 0;
    
    do{
        //recebendo valor 1
        printf("Digite o valor de N1:\t");
        scanf ("%i", &n1);
        //recebendo valor 2
        printf("Digite o valor de N2:\t");
        scanf ("%i", &n2);
        printf("Digite o valor de N3:\t");
        scanf ("%i", &n3);
    }while(n1 < 1);
    
    //identificando inteiros entre eles
    for(cont = n2; cont <= n3; cont++){
        if(cont % n1 == 0){
            result += cont;
        }
    }
	printf("%i ", result);
	return 0;
}