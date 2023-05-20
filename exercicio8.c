#include <stdio.h>

int verificaPrimo(int n){
    int j;
    if(n > 0){
    if(n < 2){
        return 0;
    }    
    for (j = 2; j < n; j++){
            if(n % j == 0){//dividir por algum j mostra q nao eh primo
                return 0;
            }
        }
    }
    if(n < 0){
        if(n > -2){
            return 0;
        }
        for(j = -2; j > n; j--){
            if(n % j == 0){//dividir por algum j mostra q nao eh primo
                return 0;
            }
        }
    }
    if(n == 0){
        return 0;
    }
    return 1; //eh primo
}

int transformaPrimo(int n){
    int adicao;

    if (n < 0){
        adicao = -1;
    } else if(n >= 0){
        adicao = 1;
    } else {
        return n;
    }

    n += adicao;

    while (!verificaPrimo(n)){
        n += adicao;
    }
    return n;
}

int verificaNegativo(int n){
    if(n < 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int linha, coluna, i, j, n;
    scanf("%d %d", &linha, &coluna);
    // Criar uma matriz auxiliar para armazenar os valores transformados
    int matriz[linha][coluna];

    if((1 <= linha && linha <= 100) && (1 <= coluna && coluna <= 100)){
        for(i = 0; i < linha; i++){
            for(j = 0; j < coluna; j++){
                scanf("%d", &n);
                    if(-31996 <= n && n <= 31996){
                        if(verificaNegativo(n)){
                            if(verificaPrimo(n)){
                                n = n;
                            } else if(!verificaPrimo(n)){
                                n = transformaPrimo(n);
                            }
                        } else {
                            if(verificaPrimo(n)){
                            n = n;
                            } else if(!verificaPrimo(n)){
                            n = transformaPrimo(n);
                            }
                            }
                    matriz[i][j] = n;    
                    }
                    if((n < -31996 && n >= -32000) || (n > 31996 && n <= 32000)){
                        matriz [i][j] = n;
                    }
            }
        }
    }
    // Imprimir a matriz transformada
    for (i = 0; i < linha; i++){
        printf("      ");
        for (j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}