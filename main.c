#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Projeto 2048//

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	inicio:
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXX                                                                                                      XXXX\n"); 
    printf("XXXX            22222222222222           000000000              44444444          888888888               XXXX\n"); 
    printf("XXXX           22222222222222222       0000000000000           444444444        8888888888888             XXXX\n"); 
    printf("XXXX           22222       22222     0000000   0000000        4444  4444      888888     888888           XXXX\n"); 
    printf("XXXX                       22222     000000     000000       4444   4444      88888       88888           XXXX\n"); 
    printf("XXXX                       22222     00000       00000      4444    4444      88888       88888           XXXX\n"); 
    printf("XXXX                       2222      00000       00000     4444     4444       88888     88888            XXXX\n"); 
    printf("XXXX                   222222        00000  ///  00000    4444      4444        8888888888888             XXXX\n"); 
    printf("XXXX              22222222           00000  ///  00000    4444444444444444     88888     88888            XXXX\n"); 
    printf("XXXX            22222                00000       00000    44444444444444      88888       88888           XXXX\n"); 
    printf("XXXX           22222                 00000       00000             44444      88888       88888           XXXX\n"); 
    printf("XXXX           22222                 000000     000000              4444      88888       88888           XXXX\n"); 
    printf("XXXX           22222        22222    0000000   0000000              4444      888888     888888           XXXX\n"); 
    printf("XXXX           222222222222222222      0000000000000               444444       8888888888888             XXXX\n"); 
    printf("XXXX           222222222222222222        000000000                44444444        888888888               XXXX\n"); 
    printf("XXXX                                                                                                      XXXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXX                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                  XXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXX  1 - CADASTRAR   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX   2 - ACESSAR    XXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXX                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                  XXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("\n"); 
    printf("\n");
    printf("\n");
    printf("\n");
    
    //Area do jogo para setar as variaveis//

	int opc;
	char nomeum [80],sobnomeum[90], emailum[3], nickum[15], senhaum [3], confsenhaum[3], acsenhaum[3], acnickum[15],nomedois[80], sobnomedois[90], emaildois[3], nickdois[15], senhadois [3], confsenhadois[3], acsenhadois[3], acnickdois[15];
	
	scanf ("%i", & opc);
	
	system ("CLS");
	
	
	
	switch (opc) {
		
		menu:
		case 1:
	//Switch para caso o usuario escolha o botão de cadastro//
			
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX     Jogador 1     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("\n");	
			printf ("                                              Primeiro Nome: ");
			scanf ("%s", &nomeum);
			
			printf ("                                              Sobrenome: ");
			scanf ("%s", &sobnomeum);

			printf ("                                              E-mail: ");
			scanf ("%s", &emailum);
			
			printf ("                                              Nick: ");
			scanf ("%s", &nickum);		
			
			printf ("                                              Senha: ");
			scanf ("%s", &senhaum);			
			
			printf ("                                              Confirme sua senha: ");
			scanf ("%s", &confsenhaum);			
			printf("\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			
			
			
			
		
		 	if (strcmp(senhaum, confsenhaum)==0) {
							
				printf ("						Cadastro realizado com sucesso");
				printf("\n");
				printf("\n");
				
					} else {
						
						printf ("					Senhas não conferem, por favor, revise sua senha\n");
						printf ("				\tAguarde um momento, carregando tela de cadastro");
						Sleep (5000);
						system ("CLS");
						goto menu; 
					}
			
			char jog, acesso;
					
			printf("\nCadastrar mais um jogador? sim (s) /não (n)");
			scanf ("%s", & jog);
			
				
			if (jog=='s') {
			
			
		//Caso o usuario queira um segundo jogador//			 
				 
				 system ("CLS");
				 
				 menudois:
				 
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX     Jogador 2     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("\n");	
			printf ("                                              Primeiro Nome: ");
			scanf ("%s", &nomedois);
			
			printf ("                                              Sobrenome: ");
			scanf ("%s", &sobnomedois);

			printf ("                                              E-mail: ");
			scanf ("%s", &emaildois);
			
			printf ("                                              Nick: ");
			scanf ("%s", &nickdois);		
			
			printf ("                                              Senha: ");
			scanf ("%s", &senhadois);			
			
			printf ("                                              Confirme sua senha: ");
			scanf ("%s", &confsenhadois);			
			printf("\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("\n");		 
		
				if (strcmp(senhadois, confsenhadois)==0) {
						
					printf ("						Cadastro realizado com sucesso");
					goto inicio;
						
					} else {
						
						printf ("					Senhas não conferem, por favor, revise sua senha\n");
						printf ("				\tAguarde um momento, carregando tela de cadastro");
						Sleep (5000);
						system ("CLS");
						goto menudois;
						
					}
				
		} else {
			
			goto inicio;
			
		}
			
		break;
			
		case 2:
			
			//Usuario escolha o botão de acesso//
			
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");	
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    L       G       N    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        O       I        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        JOGADOR 1        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			
			
			printf("\n");
			printf ("                                              Nick: ");
			scanf ("%s", &acnickum);		
			printf("\n");
			printf ("                                              Senha: ");
			scanf ("%s", &acsenhaum);			
			
			if (strcmp(senhaum, acsenhaum)==0) {
				
				printf ("\nSenha correta");
				
				if (strcmp(nickum, acnickum)==0) {
					
					printf ("\nNickname correto");
					printf ("\n");
					printf ("\n");
					printf ("\n");
					printf ("\nAcessar jogador 2? s/n");
					scanf ("%s", &acesso);
						
						if (acesso=='s') {
							
					//caso o jogador queira acessar com o segundo player//		
														
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");	
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    L       G       N    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        O       I        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        JOGADOR 2        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
						
						
						printf("\n");
						printf ("                                              Nick: ");
						scanf ("%s", &acnickdois);		
						printf("\n");
						printf ("                                              Senha: ");
						scanf ("%s", &acsenhadois);			
						
						if (strcmp(senhadois, acsenhadois)==0) {
							
							printf ("\nSenha correta");
							
							if (strcmp(nickdois, acnickdois)==0) {
								
								printf ("\nNickname correto");
								
							} else {
								
								printf ("\nNickname incorreto");
								
							}
							
						} else {
							
							printf ("\nSenha incorreta ou Usuário não encontrado");
							
						}	
						
							
							
							
						} else {
							
							goto inicio;
							
						}
					
					
				} else {
					
					printf ("\nNickname incorreto");
					
				}
				
			} else {
				
				printf ("\nSenha incorreta ou Usuário não encontrado");
				
			}
			
	
				
		}

	
	return 0;
}
