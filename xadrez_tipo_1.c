#include <stdio.h>
void peao_rei(){
       for (int i =1; i<=8;i++){
            for (int j=1; j<=8; j++)
            {
                if (i==8 && ( j==4 ||j==6 || j==5) || i==7 && ( j==4 ||j==6 || j==5)) 
                {
                    printf("2\t");
                }
                else if (i==5 || i==6)
                {
                    printf("1\t");
                }
                
                
                else{
                    printf("0\t");
                    }
            }
            printf("\n\n");  
        }
}
void cavalo(){
      for (int i=1; i<=8;i++){
            for (int j=1; j<=8; j++)
            {
                if (i==8 && (j==2 || j==7) || i==6 && (j==1 || j==8|| j==3|| j==6)||i==7 && (j==4 || j==5))  
                {
                    printf("1\t"); 
                }
                else{
                    printf("0\t");
                    }
            }
            printf("\n\n");  
        }

}

void torre(){
      for (int i=1; i<=8;i++){
            for (int j=1; j<=8; j++)
            {
                if (i==1 || j==1 || i==8 || j==8)  
                {
                    printf("1\t"); 
                }
                else{
                    printf("0\t");
                    }
            }
            printf("\n\n");  
        }
}

void bispo(){
    for (int i=1; i<=8;i++){
            for (int j=1; j<=8; j++)
            {
                if (i==8 && ( j==3 ||j==6 )|| i == 7 && j==4 || i==6 && j==5 || i==5 && j==6 || i==4 && j==7 || i==3 && j==8 || i-j==5|| i==7 &j==7 || i==6 && j==8 || (i == 7 && j==5)|| i-j==2  )  
                {
                    printf("1\t"); 
                }
                else{
                    printf("0\t");
                    }
            }
            printf("\n\n");  
        }
    }

void rainha(){
    for (int i =1; i<=8;i++){
            for (int j=1; j<=8; j++)
            {
                if (i-j==4 || j==4 || i==8 || i==7 && j==5 || i==6 && j==6 || i==5 && j==7 || i==4 && j ==8){
                    printf("1\t");
                    }
                else{
                    printf("0\t");
                    }
            }
            printf("\n\n");  
        }
    }

void tabuleiro(){
    for (int i =1; i<=8;i++)
    {
            for (int j=1; j<=8; j++)
            {

                printf("0\t");
            }
        printf("\n\n");
    }
}


int main(){
    int opcao;
    printf("Partindo da ideia que todas as peças saem da posição original (tomando a linha 8 como base)");
    printf("1.Demostração rainha\n2.Demostração bispo\n3.demonstração cavalo\n4.Demonstração torre\n5.Demonstração peao(1)/rei(2)\n6.Ver tabuleiro\n");
    scanf("%d",&opcao);
    switch (opcao) {
    case 1:
        rainha();
        break;
    case 2:
        bispo();
        break;
    case 3:
        cavalo();
        break;
    case 4:
        torre();
        break;
    case 5:
        peao_rei();
        break;
    case 6:
        tabuleiro();
        break;
    default:
        printf("Opção inválida!\n");
}

    return 0;
}
