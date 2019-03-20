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
            case 1:
            // tenho R$ 0
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 2; break;
                    case '1': s = 3; break;

                    default: break;
                }
                
                break;


            case 2:
            // tenho R$ 0,50
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 3; break;
                    case '1': s = 4; break;

                    default: break;
                }
                
                break;


            case 3:
            // tenho R$ 1
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 4; break;
                    case '1': s = 5; break;

                    case 'A': printf("agua!\n"); s = 1; break;

                    default: break;
                }
                
                break;


            case 4:
            // tenho R$ 1,50
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
                switch (getchar()){
                    case 'F': s = 8; break;
                    
                    case '5': s = 6; break;
                    case '1': s = 7; break;

                    case 'A': printf("agua!\n"); s = 3; break;
                    case 'P': printf("refri!\n"); s = 1; break;

                    default: break;
                }
                
                break;


            case 6:
            // tenho R$ 2,50
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
                switch (getchar()){
                    case 'F': s = 8; break;

                    case 'I': printf("isotonico!\n"); s = 1; break;
                    case 'A': printf("agua!\n"); s = 5; break;
                    case 'P': printf("refri!\n"); s = 3; break;
                
                    default: break;
                }
                
                break;


            case 8:
            // FIM
                exit(0);
                break;
        
            default:
                break;
        }
    }

    return 0;
}