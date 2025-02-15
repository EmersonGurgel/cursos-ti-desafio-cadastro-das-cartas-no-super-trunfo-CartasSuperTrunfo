#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha;
     
   
 
     
    // Definição de variáveis;
    char estado;
    char codigo[3];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    //titulo de apresentação;
    printf("Desafio super trunfo em C\n");

    // dizendo ao usuario as informações que serão coletadas e coletando elas;
    printf("Digite o estado:\n");
    scanf("%c", &estado);
    
    printf("Digite o código\n");
    scanf("%s", &codigo);
    
    print("Digite o nome da cidade\n");
    scanf("%s", &nomedacidade);

    print("Digite a população\n");
    scanf("%d", &populacao);

    printf("Digite a área\n");
    scanf("%f", &area);

    printf("Digite o pib\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &pontosturisticos);

    //Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
    printf("Estado: %c", estado);
    printf("Código da cidade: %s", codigo);
    printf("Nome da cidade: %s", nomedacidade);
    printf("População: %d", populacao);
    printf("Área: %f", area);
    printf("Pib: %f", pib);
    printf("Pontos turísticos: %d", pontosturisticos);


}