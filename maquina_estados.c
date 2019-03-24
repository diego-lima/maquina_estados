#include <stdio.h>
#include <stdlib.h>

int main(){
    int s = 1;

    /**
     * COMANDOS
     * '5' = R$ 0,50
     * '1' = R$ 1,00
     */

    while (1){
        switch (s){
            /**
             * CORPO PRINCIPAL
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS
             * DO 1 AO 8!
             * */
            case 1:
            // tenho R$ 0
                printf("saldo: R$ 0\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 2; break;
                    case '1': s = 3; break;

                    default: break;
                }
                
                break;


            case 2:
            // tenho R$ 0,50
                printf("saldo: R$ 0,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 3; break;
                    case '1': s = 4; break;

                    default: break;
                }
                
                break;


            case 3:
            // tenho R$ 1
                printf("saldo: R$ 1\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 4; break;
                    case '1': s = 5; break;

                    case 'A': printf("agua!\n"); s = 12; break;

                    default: break;
                }
                
                break;


            case 4:
            // tenho R$ 1,50
                printf("saldo: R$ 1,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 5; break;
                    case '1': s = 6; break;

                    case 'A': printf("agua!\n"); s = 2; break;

                    default: break;
                }
                
                break;


            case 5:
            // tenho R$ 2
                printf("saldo: R$ 2\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 6; break;
                    case '1': s = 7; break;

                    case 'A': printf("agua!\n"); s = 3; break;
                    case 'P': printf("refri!\n"); s = 13; break;

                    default: break;
                }
                
                break;


            case 6:
            // tenho R$ 2,50
                printf("saldo: R$ 2,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 7; break;

                    case 'A': printf("agua!\n"); s = 4; break;
                    case 'P': printf("refri!\n"); s = 2; break;
                
                    default: break;
                }
                
                break;


            case 7:
            // tenho R$ 3
            printf("saldo: R$ 3\n");
                switch (getchar()){
                    case 'F': s = 8; break;

                    case 'A': printf("agua!\n"); s = 5; break;
                    case 'P': printf("refri!\n"); s = 3; break;
                    case 'I': printf("isotonico!\n"); s = 14; break;
                
                    default: break;
                }
                
                break;


            case 8:
            // FIM
                exit(0);
                break;
        
            default:
                break;

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS PRIMEIROS ESTADOS
             * QUE SURGIRAM DA CONVERSÃO PARA NÃO-DETERMINÍSTICO.
             * SÃO OS ESTADOS DESENHADOS EM PRETO NA FOTO, QUE
             * SÓ TÊM 2 DÍGITOS:
             * 12, 13, 14, 23, 34, 45, 56, 67
             */

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE TRÊS DÍGITOS EM PRETO
             * DA FOTO:
             * 132, 234, 345, 567, 456
             */

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE DOIS DÍGITOS EM VERMELHO
             * DA FOTO:
             * 24, 35, 46, 57
             */

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE DOIS DÍGITOS EM AZUL
             * DA FOTO:
             * 25, 36, 47
             */

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE TRÊS DÍGITOS EM AZUL
             * DA FOTO:
             * 124, 235, 346, 457
             */
        }
    }

    return 0;
}