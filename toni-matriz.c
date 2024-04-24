#include <stdio.h>
#include <locale.h>

int main(){

int i, j, k;
int matriz[3][3];
int linha[3], coluna[3];

printf("Digite 9 numeros:\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d", &matriz[i][j]);
    }

}
for(i=0;i<3;i++){
    linha[i]=0;
    for(j=0;j<3;j++){
        linha[i] +=  matriz[i][j];
    }
}
printf("...................Matriz...................\n");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("\t %d", matriz[i][j]);
    }
    printf("\t = %d\n", linha[i]);
}

printf("..............Soma das Colunas..............\n");
for(j=0;j<3;j++){
    coluna[j]=0;
    for(i=0;i<3;i++){
        coluna[j] +=  matriz[i][j];
    }
    printf("\t = %d", coluna[j]);
}
printf("\n");










return 0;
}
