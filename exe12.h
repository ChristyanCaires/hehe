int exec12(int t){
    /**************************************
                
                EXERCICIO 12
                
    ***************************************/
    //Variaveis locais
    int horas, min, seg;
    
    //convertendo os segundos em horas
    horas = (t /3600);
    min = ((t - (3600 * horas))/60);
    seg = (t - (3600 * horas)-(min * 60));
    return printf("Tempo convertido -> %dh:%dm:%ds", horas, min, seg);
}
