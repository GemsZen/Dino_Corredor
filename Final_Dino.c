#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "dino.h"


int main(int argc, char const *argv[]){

    system("mode con: lines=29 cols=82");
    char ch, continuar;
    int i;
    char opcao = menu();
    while(opcao != 'x' || opcao != 'X'){
	    if(opcao == 'w' || opcao == 'W'){
			iniciar();

			while(1){
	        	while(!kbhit()){
		            dino(0);
		            continuar = manip_object();
		            if(continuar == 'x' || continuar == 'X'){
		            	system("cls");
		            	break;
		            }
	        	}
	        	ch=getch();
	        	if(ch == 'w'){
	        	
	            	for(i=0; i<10; i++){
		            	dino(1);
		            	continuar = manip_object();
		            	if(continuar == 'x' || continuar == 'X'){
		            		system("cls");
		            		break;
		            	}
	            	}
	          
	            	for(i=0; i<10; i++){
			            dino(2);
			            continuar = manip_object();
			            if(continuar == 'x' || continuar == 'X'){
		            		system("cls");
		            		break;
		            	}
	            	}
	        	}
	        	else if (ch == 'x'){
	            	opcao = menu();
	            	break;
	            }
	    	} 
		} else if(opcao == 'c' || opcao == 'C'){
    		creditos();
    		opcao = menu();
   		} else{
	    	return 0;
	    }
	}
}


