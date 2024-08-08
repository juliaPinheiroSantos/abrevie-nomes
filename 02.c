#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char nome[100], nomeAbreviado[100];
	int size = 0, cont = 0, tamanho = 0;
	printf("Digite o nome completo : ");
	fgets(nome, 100, stdin);
	
	for (int i = 0; nome[i] != '\0'; i++){
		if (nome[i-1] == ' ' || i == 0){
		    size = 0;
			for (int j = i; nome[j] != ' ' && nome[j] != '\0'; j++){	
			size++;
		}
		
			for (int j = i; nome[j] != ' ' && nome[j] != '\0'; j++){
				if (size <= 2){
					nomeAbreviado[cont] = nome[i];
					cont+=1;
					nomeAbreviado[cont] = nome[i+1];
					cont+=1;
					nomeAbreviado[cont] = ' ';
					cont+=1;
				}
				
				else if (size > 2){
					nomeAbreviado[cont] = nome[i];
					cont+=1;
					nomeAbreviado[cont] = '.';
					cont+=1;
					nomeAbreviado[cont] = ' ';
					cont+=1;
				}
				
				break;
			}	
		}		
	}
	
	tamanho = strlen(nomeAbreviado)-1;
	
	for (int i = 0; i < tamanho; i++){
		printf("%c", nomeAbreviado[i]);
	}
	
	
	
	return 0;
}
