#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int resposta;
    int numMatricula;
    char nomeAluno[100][15] = {};
    int idadeAluno[15] = {};
    char dataNascimento[10][15] = {};
    char cursoAluno[50][15] = {};
    int resposta_verificar;

    bool sair = false;
    bool cadastrado = false;
    while(sair == false){

        printf("----------------------------------------------------------\n");
        printf("De acordo com a tabela, digite o que deseja fazer: \n");
        printf(" Cadastrar aluno - 1 \n Verificar informações - 2 \n Remover um aluno - 3 \n Sair do programa - 4 \n");
        printf("----------------------------------------------------------\n");
        scanf("\n%d", &resposta);

        if(resposta == 1){

            printf("Qual o número da matrícula do aluno: \n");
            scanf("%d", &numMatricula);

            if(numMatricula > 15){
                printf("\n----------------------------------------------------------\n");
                printf("O número da matrícula deve estar entre 1 e 15!\n");
                printf("----------------------------------------------------------\n\n");
            }

            else{
                printf("Qual o nome do aluno: \n");
                scanf("%s", nomeAluno[numMatricula]);

                printf("Qual a idade do aluno: \n");
                scanf("%d", &idadeAluno[numMatricula]);

                printf("Qual a data de nascimento do aluno: \n");
                scanf("%s", dataNascimento[numMatricula]);

                printf("Qual o curso do aluno: \n");
                scanf("%s", cursoAluno[numMatricula]);

                cadastrado = true;

                printf("\n\n\n----------------------------------------------------------\n");
                printf("Aluno cadastrado com sucesso!\n");
                printf("----------------------------------------------------------\n\n");
            }
        
        }
        else if(resposta == 2){

                printf("Digite o número da matrícula do aluno: \n");
                scanf("%d", &resposta_verificar);

                if (strcmp(nomeAluno[resposta_verificar], "\0") == 0 && idadeAluno[resposta_verificar] == 0 && strcmp(dataNascimento[resposta_verificar], "\0") == 0 && strcmp(cursoAluno[resposta_verificar], "\0") == 0){
                    printf("\n\n\n---------------------------------------------------------------------\n");
                    printf("Nenhum aluno cadastrado com esse número de matrícula!\n");
                    printf("---------------------------------------------------------------------\n\n");
                }
                else {
                    printf("\n----------------------------------------------------------\n");
                    printf("INFORMAÇÕES DO ALUNO: \n");
                    printf("Nome do aluno: %s\n", nomeAluno[resposta_verificar]);
                    printf("Idade do aluno: %d\n", idadeAluno[resposta_verificar]);
                    printf("Data de nascimento do aluno: %s\n", dataNascimento[resposta_verificar]);
                    printf("Curso do aluno: %s\n", cursoAluno[resposta_verificar]);
                    printf("----------------------------------------------------------\n\n");
                }

        }
        else if(resposta == 3){

                printf("Digite o número da matrícula do aluno a ser excluido: \n");
                scanf("%d", &resposta_verificar);

                strcpy(nomeAluno[resposta_verificar], "");
                idadeAluno[resposta_verificar] = 0;
                strcpy(dataNascimento[resposta_verificar], "");
                strcpy(cursoAluno[resposta_verificar], "");

                printf("\n\n\n----------------------------------------------------------\n");
                printf("Aluno excluído com sucesso!\n");
                printf("----------------------------------------------------------\n\n");

        }
        else if(resposta == 4){
            sair = true;
        }

        
    }
    return 0;
}