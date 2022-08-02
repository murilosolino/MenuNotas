#include <iostream>
#include <stdio.h>
#include <locale.h>
main(void)
//programador : Murilo Almeida Solino de Oliveira
//data: 08/06/2022
{
setlocale(LC_ALL,"portuguese");
/*=====================================
		Área de declaração de variáveis
======================================*/
	int nralunos;
	printf ("Quantos alunos deseja lançar\n");
	scanf ("%d",&nralunos);
	float p1[nralunos];
	float p2[nralunos];
	float trab1[nralunos];
	float trab2[nralunos];
	float pi[nralunos];
	int i;
	float media[10];
	int opc;
	float nrmedia;
	char nomes[nralunos][10];
	float mg;
//======================================
	do
	{
		printf ("=================================================\n");
		printf ("			  MENU DE OPÇÕES					  \n");
		printf ("=================================================\n");
		printf ("1 - Lançar alunos\n");
		printf ("2 - Lançar nota \n");
		printf ("3 - Consultar média geral da turna \n");
		printf ("4 - Consultar boletim de um aluno específico \n");
		printf ("5 - Consultar boletim de todos os alunos \n");
		printf ("6 - Sair \n");
		printf ("Escolha a opção: \n");
		scanf ("%d", &opc);	
		system ("cls");
		
		if (opc==1)
		{
		
			for (i = 1; i<=nralunos; i++)
			{
				printf ("Quais alunos deseja lançar \n");
				scanf ("%s", &nomes[i]);
			}	
		}	
		else
		{
			if (opc==2)
			{
				for(i = 1; i <= nralunos; i++)
				{
					printf("Digite a nota 1 do aluno %s \n",nomes[i]);
					scanf("%f",&p1[i]);
					printf("Digite a nota 2 do aluno %s \n",nomes[i]);
					scanf("%f",&p2[i]);
					printf("Digite a nota 3 do aluno %s \n",nomes[i]);
					scanf("%f",&trab1[i]);
					printf("Digite a nota 4 do aluno %s \n",nomes[i]);
					scanf("%f",&trab2[i]);
					printf("Digite a nota 5 do aluno %s \n",nomes[i]);
					scanf("%f",&pi[i]);
					media[i] = ((p1[i] * 0.15) + (p2[i] * 0.15) + (trab1[i] * 0.10) + (trab2[i] * 0.10) + (pi[i] * 0.5));
					system("cls");
				}
			}
			else
			{
				if (opc==3)
				{
					mg = (media[1] + media[2] + media[3] + media[4] + media[5] + media[6] + media[7] + media[8] + media[9] + media[10]) / nralunos;
					printf("=======================================================\n");
					printf("	Média geral da turma : %.2f\n",mg);
					printf("=======================================================\n");
					system("pause");
					system("cls");
				}
				else
				{
					if (opc==5)
					{
						for (i = 1; i<=nralunos; i++)
						{
							printf("=======================================================\n");
							printf("		BOLETIM	DO ALUNO %s			   \n",nomes[i]); 
							printf("=======================================================\n");
							printf(" P1 |  P2 | TRAB1 | TRAB2 | PI | MÉDIA|\n");
							printf("%.2f|%.2f |%.2f   | %.2f  |%.2f| %.2f |\n",p1[i] * 0.15, p2[i] * 0.15, trab1[i] * 0.10, trab2[i] * 0.10, pi[i] * 0.5, media[i]);
							system("pause");
							system("cls");	
						}	
					}
					else
					{
						if (opc==4)
						{
							for (i = 1; i<=nralunos; i++)
							{						
							printf("Deseja visualizar o boletim de qual aluno?\n");
							scanf("%d", &nomes[nralunos]);
							printf("=======================================================\n");
							printf("		BOLETIM	DO ALUNO 		   \n",nomes[nralunos][10]); 
							printf("=======================================================\n");
							printf(" P1 |  P2 | TRAB1 | TRAB2 | PI | MÉDIA|\n");
							printf("%.2f|%.2f |%.2f   | %.2f  |%.2f| %.2f |\n",p1[nralunos] * 0.15, p2[nralunos] * 0.15, trab1[nralunos] * 0.10, trab2[nralunos] * 0.10, pi[nralunos] * 0.5, media[nralunos]);	
							system("pause");
							system("cls");
							}
						}
					}
				}
			}	
		}
	} 
	while (opc !=6);
}
