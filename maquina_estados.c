#include <stdio.h>
#include <stdlib.h>

void main(){
    int s = 1;

    /**
     * COMANDOS
     * 'F' = finalizar tudo
     * '5' = inserir R$ 0,50
     * '1' = inserir R$ 1,00
     * 'A' = pedir água
     * 'P' = pedir refrigerante
     * 'I' = pedir isotônico
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
                printf("Máquina desligada.\n");
                exit(0);
                break;

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS PRIMEIROS ESTADOS
             * QUE SURGIRAM DA CONVERSÃO PARA NÃO-DETERMINÍSTICO.
             * SÃO OS ESTADOS DESENHADOS EM PRETO NA FOTO, QUE
             * SÓ TÊM 2 DÍGITOS:
             * 12, 13, 14, 23, 34, 45, 56, 67
             */

            case 12:
            // tenho R$ 0 ou R$ 0,50
                printf("saldo: R$ 0|0,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 23; break;
                    case '1': s = 34; break;

                    default: break;
                }
                
                break;

            case 13:
            // tenho R$ 0 ou R$ 1
                printf("saldo: R$ 0|1\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 24; break;
                    case '1': s = 35; break;

                    case 'A': printf("agua!\n"); s = 12; break;

                    default: break;
                }
                
                break;

            case 14:
            // tenho R$ 0 ou R$ 1,50
                printf("saldo: R$ 0|1,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 25; break;
                    case '1': s = 36; break;

                    case 'A': printf("agua!\n"); s = 2; break; // @= é 2 mesmo?

                    default: break;
                }
                
                break;

            case 23:
            // tenho R$ 0,50 ou R$ 1
                printf("saldo: R$ 0|1\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 34; break;
                    case '1': s = 45; break;

                    case 'A': printf("agua!\n"); s = 12; break;

                    default: break;
                }
                
                break;

            case 34:
            // tenho R$ 1 ou R$ 1,50
                printf("saldo: R$ 1|1,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 45; break;
                    case '1': s = 56; break;

                    case 'A': printf("agua!\n"); s = 12; break;

                    default: break;
                }
                
                break;

            case 45:
            // tenho R$ 1,50 ou R$ 2
                printf("saldo: R$ 1,50|2\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 56; break;
                    case '1': s = 67; break;

                    case 'A': printf("agua!\n"); s = 23; break;
                    case 'P': printf("refri!\n"); s = 13; break;

                    default: break;
                }
                
                break;

            case 56:
            // tenho R$ 2 ou R$ 2,50
                printf("saldo: R$ 2|2,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 67; break;
                    case '1': s = 7; break;

                    case 'A': printf("agua!\n"); s = 34; break;
                    case 'P': printf("refri!\n"); s = 132; break;

                    default: break;
                }
                
                break;

            case 67:
            // tenho R$ 2,50 ou R$ 3
                printf("saldo: R$ 2,50|3\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 7; break; // @= é 7 mesmo? e se eu tivesse R$ 3?

                    case 'A': printf("agua!\n"); s = 45; break;
                    case 'P': printf("refri!\n"); s = 23; break;
                    case 'I': printf("isotonico!\n"); s = 14; break;

                    default: break;
                }
                
                break;

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE TRÊS DÍGITOS EM PRETO
             * DA FOTO:
             * 132, 234, 345, 567, 456
             */
			 
			 case 132:
            // tenho R$ 0 ou R$ 1 ou R$ 0,50
                printf("saldo: R$ 0|1|0,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 234; break;
					case '1': s = 345; break;
					
                    default: break;
                }
                
                break;
				
			case 234:
            // tenho R$ 0,50 ou R$ 1 ou R$ 1,50
                printf("saldo: R$ 0,50|1|1,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 345; break; // @= é 7 mesmo? e se eu tivesse R$ 3?
					case '1': s = 456; break;
					
                    case 'A': printf("agua!\n"); s = 12; break;
                 
					default: break;
                }
                
                break;
				
			case 345:
            // tenho R$ 1 ou R$ 1,50 ou R$ 2
                printf("saldo: R$ 1|1,50|2\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 456; break; // @= é 7 mesmo? e se eu tivesse R$ 3?
					case '1': s = 567; break;
					
                    case 'A': printf("agua!\n"); s = 132; break;
					case 'P': printf("refri!\n"); s = 13; break;
					
					default: break;
                }
                
                break;
				
			case 456:
            // tenho R$ 1,50 ou R$ 2 ou R$ 2,50 
                printf("saldo: R$ 1,50|2|2,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 567; break; // @= é 7 mesmo? e se eu tivesse R$ 3?
					case '1': s = 67; break;
					
                    case 'A': printf("agua!\n"); s = 234; break;
					case 'P': printf("refri!\n"); s = 132; break;
					
					default: break;
                }
                
                break;
				
			case 567:
            // tenho R$ 2 ou R$ 2,50 ou R$ 3 
                printf("saldo: R$ 2|2,50|3\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 67; break; // @= é 7 mesmo? e se eu tivesse R$ 3?
					case '1': s = 7; break;
					
                    case 'A': printf("agua!\n"); s = 345; break;
					case 'P': printf("refri!\n"); s = 132; break;
					case 'I': printf("isotonico!\n"); s = 14; break;
					
					default: break;
                }
                
                break;

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE DOIS DÍGITOS EM VERMELHO
             * DA FOTO:
             * 24, 35, 46, 57
             */
			 
			case 24:
            // tenho R$ 0,50 ou R$ 1,50
                printf("saldo: R$ 0,50|1,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 35; break;
                    case '1': s = 46; break;

                    case 'A': printf("agua!\n"); s = 2; break;

                    default: break;
                }
                
                break;

			case 35:
            // tenho R$ 1 ou R$ 2
                printf("saldo: R$ 1|2\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 46; break;
                    case '1': s = 57; break;

                    case 'A': printf("agua!\n"); s = 132; break;
					case 'P': printf("refri!\n"); s = 13; break;

                    default: break;
                }
                
                break;
				
			case 46:
            // tenho R$ 1,50 ou R$ 2,50
                printf("saldo: R$ 1,50|2,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 57; break;
                    case '1': s = 6; break;

                    case 'A': printf("agua!\n"); s = 24; break;
					case 'P': printf("refri!\n"); s = 2; break;

                    default: break;
                }
                
                break;
				
			case 57:
            // tenho R$ 2 ou R$ 3
                printf("saldo: R$ 2|3\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 6; break;
                    case '1': s = 7; break;

                    case 'A': printf("agua!\n"); s = 35; break;
					case 'P': printf("refri!\n"); s = 13; break;
					case 'I': printf("isotonico!\n"); s = 14; break;
					
                    default: break;
                }
                
                break;
				
            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE DOIS DÍGITOS EM AZUL
             * DA FOTO:
             * 25, 36, 47
             */
			 
			case 25:
            // tenho R$ 0,50 ou R$ 2
                printf("saldo: R$ 0,50|2\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 36; break;
                    case '1': s = 47; break;

                    case 'A': printf("agua!\n"); s = 3; break;
					case 'P': printf("refri!\n"); s = 13; break;
					
                    default: break;
                }
                
                break;
				
			case 36:
            // tenho R$ 1 ou R$ 2,50
                printf("saldo: R$ 1|2,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 47; break;
                    case '1': s = 5; break;

                    case 'A': printf("agua!\n"); s = 124; break;
					case 'P': printf("refri!\n"); s = 2; break;
					
                    default: break;
                }
                
                break;
				
			case 47:
            // tenho R$ 1,50 ou R$ 3
                printf("saldo: R$ 1,50|3\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 5; break;
                    case '1': s = 6; break; 

                    case 'A': printf("agua!\n"); s = 25; break; 
					case 'P': printf("refri!\n"); s = 3; break; 
					case 'I': printf("isotonico!\n"); s = 14; break;
					
                    default: break;
                }
                
                break;

            /**
             * NO PEDAÇO ABAIXO, TEMOS OS ESTADOS DE TRÊS DÍGITOS EM AZUL
             * DA FOTO:
             * 124, 235, 346, 457
             */
			 
			case 124:
            // tenho R$ 0 ou R$ 0,50 ou R$ 1,50 
                printf("saldo: R$ 0|0,50|1,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 235; break; 
					case '1': s = 346; break;
					
                    case 'A': printf("agua!\n"); s = 2; break;
						
					default: break;
                }
                
                break;

			case 235:
            // tenho R$ 0,50 ou R$ 1 ou R$ 2 
                printf("saldo: R$ 0,50|1|2\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 346; break; 
					case '1': s = 457; break;
					
                    case 'A': printf("agua!\n"); s = 132; break;
					case 'P': printf("refri!\n"); s = 13; break;
					
					default: break;
                }
                
                break;
				
			case 346:
            // tenho R$ 1 ou R$ 1,50 ou R$ 2,50 
                printf("saldo: R$ 1|1,50|2,50\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 457; break; 
					case '1': s = 56; break;
					
                    case 'A': printf("agua!\n"); s = 124; break;
					case 'P': printf("refri!\n"); s = 2; break;
					
					default: break;
                }
                
                break;
				
			case 457:
            // tenho R$ 1,50 ou R$ 2 ou R$ 3 
                printf("saldo: R$ 1,50|2|3\n");
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 56; break; 
					case '1': s = 67; break;
					
                    case 'A': printf("agua!\n"); s = 124; break;
					case 'P': printf("refri!\n"); s = 13; break;
					case 'I': printf("isotonico!\n"); s = 14; break;
					
					default: break;
                }
                
                break;

            default:
                break;
        }
    }
}
