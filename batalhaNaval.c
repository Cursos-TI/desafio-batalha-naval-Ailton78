#include <stdio.h>



int main() {

   const int SIZE = 10;
    int matriz[SIZE][SIZE];

   
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = 0; 
        }
    }

      printf("\n\n");
    
    for(int i = 0; i < SIZE; i++){
        for(int j=0; j < SIZE; j++){
            if(i==1 && j > 2 && j <8 )
                matriz[i][j] = 3;

            if(i==9 && j > 1 && j <5 )
                matriz[i][j] = 3;

            if(i== j && i < 6 )
                matriz[i][j] = 3;        
        }
    }
        for (int i = SIZE - 1; i >=0; i--) {
            if(i >5)
             matriz[i][SIZE - 1-i] = 3;
    }


        for (int i = 0; i < SIZE; i++) {
            printf("\n\t");
            for (int j = 0; j < SIZE; j++) {
                printf("%d ", matriz[i][j]); 
        }
      
    }
    printf("\n\n");


    int cone[3][5];

    // Preenche a matriz automaticamente com base no padrão fornecido
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            // Condições para preencher a matriz
            if (i == 0 && j == 2) {
                cone[i][j] = 1;
            } else if (i == 1 && j >= 1 && j <= 3) {
                cone[i][j] = 1;
            } else if (i == 2) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");  // Quebra de linha para a próxima linha da matriz
    }

    printf("\n\n");


 int octaedro[3][5];

    // Preenche a matriz automaticamente com base no padrão fornecido
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            // Condições para preencher a matriz com base no padrão
            if ((i == 0 || i == 2) && j == 2) {
                octaedro[i][j] = 1; 
            } else if (i == 1 && (j >= 1 && j <= 3)) {
                octaedro[i][j] = 1; 
            } else {
                octaedro[i][j] = 0; 
            }
        }
    }

    // Imprime a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");  // Quebra de linha para a próxima linha da matriz
    }

 printf("\n\n");
    
   int cruz[3][5];

    // Preenche a matriz automaticamente com base no padrão fornecido
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            // Condições para preencher a matriz com base no padrão
            if ((i == 0 || i == 2) && j == 2) {
                cruz[i][j] = 1; 
            } else if (i == 1) {
                cruz[i][j] = 1; 
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    // Imprime a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");  // Quebra de linha para a próxima linha da matriz
    }

    printf("\n\n");

    return 0;
}
