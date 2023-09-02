/*Faça um programa que efetue reserva de passagens aéreas de determinada companhia. O programa  deverá ler os números dos aviões e o número de lugares disponíveis em cada um. Utilize um vetor de  quatro posições, no qual cada posição representa um avião, e outro vetor também de quatro posições  para armazenar os lugares disponíveis.  O programa deverá mostrar o seguinte menu de opções:  
1. Cadastrar o número dos aviões.  
2. Cadastrar o número de lugares disponíveis em cada avião.  
3. Reservar passagem.  
4. Consultar por avião.  
5. Consultar por passageiro.  
6. Finalizar.  
Imagine que poderão ser registradas até 60 reservas e que cada uma deverá possuir o número do avião  e o nome do passageiro. 
Para realizar a opção 1, deverá ser solicitado ao usuário o número dos quatro aviões disponíveis.  
Para realizar a opção 2, deverá ser solicitado ao usuário o número de lugares disponíveis em cada avião  cadastrado na opção 1. 
Para realizar a opção 3, deverá ser verificado se o número do avião digitado é válido. Posteriormente,  checar se, no avião escolhido, ainda existe lugar disponível. Caso exista, o programa deverá diminuir o  total de vagas e mostrar a mensagem Reserva confirmada. Caso contrário, deverá mostrar a mensagem  Voo lotado. Observe que não podem ser feitas mais de 60 reservas. 
Para realizar a opção 4, deverá ser solicitado o número do avião desejado e, posteriormente, deverão  ser exibidas todas as suas reservas.  
Para realizar a opção 5, deverá ser solicitado o nome do passageiro e, posteriormente, deverão ser exibidas todas as reservas feitas em seu nome.  
A opção 6 encerra o programa.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

struct PASSAGEIRO {
    char nome[100];
    int numAviao;
    int qtdReservas;
};

struct RESERVAS {
    int numAviao[4];
    int numLugares[4];
    int qtdReserva[4];
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    struct RESERVAS reserva;
    struct PASSAGEIRO passageiros[60];
    int opcao, registroAviao, reservaPassagem, consultarAviao, qtdReservas, aviaoValido, aviaoLugares = 0, reservasRealizadas = 0, reservasPassageiro = 0, encontrarReservas;
    char consultarPassageiro[100];

    do {

        printf("-------------------------------\n");
        printf("Escolha uma das seguintes opcoes.\n\n");
        printf("1. Cadastrar o numero dos avioes.\n");
        printf("2. Cadastrar o numero de lugares disponiveis em cada aviao.\n");
        printf("3. Reservar passagem.\n");
        printf("4. Consultar por aviao.\n");
        printf("5. Consultar por passageiro.\n");
        printf("6. Encerrar o programa\n");
        printf("------------------------------\n");
        scanf("%d", &opcao);

        switch (opcao) {

            // Cadastrar o número dos aviões.
            case 1:
                for (registroAviao = 0; registroAviao < 4; registroAviao++) {
                    printf("Digite o numero do aviao %d: ", registroAviao + 1);
                    scanf("%d", &reserva.numAviao[registroAviao]);
                }
                printf("\n");
                break;

            // Cadastrar o número de lugares disponíveis em cada avião.
            case 2:
                for (registroAviao = 0; registroAviao < 4; registroAviao++) {
                    printf("Cadastre o numero de lugares disponiveis no aviao %d: ", reserva.numAviao[registroAviao]);
                    scanf("%d", &reserva.numLugares[registroAviao]);
                    if (reserva.numLugares[registroAviao] > 60) {
                        printf("O limite maximo de lugares para cada aviao e de 60 lugares\n");
                        break;
                    }
                }
                printf("\n");
                break;

            // Reservar passagem.
            case 3:
                printf("Digite o numero do aviao em que deseja fazer uma reserva: ");
                scanf("%d", &reservaPassagem);

                aviaoValido = 0;
                // Verificar se o aviao escolhido é valido
                for (registroAviao = 0; registroAviao < 4; registroAviao++) {
                    if (reservaPassagem == reserva.numAviao[registroAviao]) {
                        aviaoValido = 1;
                        aviaoLugares = registroAviao;
                        break;
                    }
                }

                if (aviaoValido) {
                    printf("Aviao valido!\n");
                    printf("---------------------\n");

                    // Verificar se o aviao escolhido ainda tem lugares disponíveis
                    if (reserva.numLugares[aviaoLugares] > 0) {
                        printf("Existem %d lugares disponiveis.\n", reserva.numLugares[aviaoLugares]);

                        // Digitar o nome do passageiro
                        printf("Digite o nome do passageiro: ");
                        scanf("%s", passageiros[reservasPassageiro].nome);

                        // Digitar a quantidade de reservas
                        printf("Digite a quantidade de reservas que deseja realizar: ");
                        scanf("%d", &qtdReservas);
    
                        // Verificar se a quantidade de reservas é maior que o numero de lugares disponiveis
                        if (qtdReservas > reserva.numLugares[aviaoLugares]) {
                            printf("Quantidade desejada insuficiente\n");
                        } else {
                            printf("----------------------\n");
                            printf("Reserva confirmada!\n");

                            passageiros[reservasPassageiro].numAviao = reservaPassagem;
                            passageiros[reservasPassageiro].qtdReservas = qtdReservas;

                            reservasRealizadas += qtdReservas;
                            reserva.numLugares[aviaoLugares] -= qtdReservas;
                            reservasPassageiro++;
                        }
                    } else {
                        printf("Voo lotado!\n");
                    }
                } else {
                    printf("Aviao invalido.\n");
                }

                break;
            
            //consultar por aviao
            case 4:
                //solicitar o numero do aviao desejado
                printf("Digite o numero do aviao que deseja consultar: ");
                scanf("%d", &consultarAviao);

                encontrarReservas = 0;
                //consultar o aviao 
                for(registroAviao = 0; registroAviao < 4; registroAviao++){
                    if(consultarAviao == reserva.numAviao[registroAviao]){
                        printf("Aviao: %d\n", consultarAviao);
                        printf("Reservas realizadas: %d\n",reservasRealizadas);
                        printf("Lugares existentes: %d\n", reserva.numLugares[registroAviao]);
                        encontrarReservas = 1;
                    }
                }

                if(!encontrarReservas){
                    printf("Nao foram registradas reservas para o aviao %d: \n", consultarAviao);
                }
                break;

            //consultar por nome do passageiro
            case 5:
                printf("Digite o nome do passageiro que deseja consultar: ");
                scanf("%s", consultarPassageiro);

                encontrarReservas = 0;

                //consultar o passageiro
                for(registroAviao = 0; registroAviao < reservasPassageiro; registroAviao++){
                    if(strcmp(consultarPassageiro, passageiros[registroAviao].nome) == 0){
                        printf("Nome: %s\n", passageiros[registroAviao].nome);
                        printf("Reservas: %d\n", passageiros[registroAviao].qtdReservas);
                        encontrarReservas = 1;
                    }
                }
                if(!encontrarReservas){
                    printf("Nao foram registradas reservas para o passageiro %s\n", consultarPassageiro);
                }
                break;
            default:
                printf("Opcao invalida. Digite um numero entre 1 e 6.\n");
                printf("\n");
                break;
        }
    } while (opcao != 6);
    printf("Programa encerrado!\n");

    return 0;
}