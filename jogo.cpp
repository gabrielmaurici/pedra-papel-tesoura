#include <iostream>
#include <cstdlib> //Para gerar número aleatório
#include <string.h> // Para gerar String na array
#include <stdlib.h> // Para dar clean na repetição
#include <locale.h> // Para compilar em Português

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int s = 0; // Variável feita para While de encerramento do programa

    //While de encerramento do programa
    while (s == 0){
        

    int teste = 0;

    int jogador, computador;
    char ppt[4][7];

    strcpy(ppt[0], " ");
    strcpy(ppt[1], "Pedra");
    strcpy(ppt[2], "Papel");
    strcpy(ppt[3], "Tesoura");

    // While para repetir o menu caso o jogador não escolha nenhuma das opções apresentadas
    while (teste == 0){
        
        system("clear||cls");

        cout << "Pedra, Papel ou Tesoura ?" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "1. Pedra  ";
        cout << "2. Papel  ";
        cout << "3. Tesoura  "; 
        cout << "4. Para sair" << endl;


        cin >> jogador;


        if (jogador >=1 && jogador <=4){
            teste = 1;
        }

    } //Encerramento do While do menu
    
    if(jogador == 4){
        s = 1;
    }  // Condição do While para encerrar o programa


    // if para continuar a sequência caso o jogador escolha '1' '2' ou '3'
    if(jogador != 4){

    //rand para gerar número aleatório atribuido a variável computador
    computador = 1+(rand()%3);
    cout << endl;
    cout << endl;
    cout << "Você escolheu: " << ppt[jogador] << endl;   // Atribuindo o valor de entrada de jogador para dentro da array
    cout << "----------------------------------------------" << endl;
    cout << "O computador escolheu: " << ppt[computador] << endl;   // Atribuindo o valor aleatório de computador para dentro da array
    cout << "----------------------------------------------" << endl;

    system("pause"); // Pause pro jogador ver a própria escolha e a do computador, seguindo para resultado
    
    int resultado; // Resultado 0, EMPATE ---- Resultado 1, JOGADOR GANHA ---- Resultado 2, COMPUTADOR GANHA

    cout << endl;
    cout << endl;

    // if's para gerar todas as condições possíveis de 'Pedra' e apresentar o resultado ao jogador
    if(jogador == 1 && computador == 1){
        resultado = 0;
        cout << "*************" << endl;
        cout << "** Empate! **" << endl;
        cout << "*************" << endl;
    } else if (jogador == 1 && computador == 2){
        resultado = 2;
        cout << "*******************" << endl;
        cout << "** Você perdeu. **" << endl;
        cout << "*******************" << endl;
    } else if (jogador == 1 && computador == 3){
        resultado = 1;
        cout << "*********************" << endl;
        cout << "** Você ganhou!!! **" << endl;
        cout << "*********************" << endl;
    }

    // if's para gerar todas as condições possíveis de 'Papel' e apresentar o resultado ao jogador
    if(jogador == 2 && computador == 1){
        resultado = 1;
        cout << "*********************" << endl;
        cout << "** Você ganhou!!! **" << endl;
        cout << "*********************" << endl;
    } else if (jogador == 2 && computador == 2){
        resultado = 0;
        cout << "*************" << endl;
        cout << "** Empate! **" << endl;
        cout << "*************" << endl;
    } else if (jogador == 2 && computador == 3){
        resultado = 2;
        cout << "*******************" << endl;
        cout << "** Você Perdeu. **" << endl;
        cout << "*******************" << endl;
    }

    // if's para gerar todas as condições possíveis de 'Tesoura' e apresentar o resultado ao jogador
    if(jogador == 3 && computador == 1){
        resultado = 2;
        cout << "******************" << endl;
        cout << "** Você perdeu.** " << endl;
        cout << "******************" << endl;
    } else if (jogador == 3 && computador == 2){
        resultado = 1;
        cout << "*********************" << endl;
        cout << "** Você ganhou!!! **" << endl;
        cout << "*********************" << endl;
    } else if (jogador == 3 && computador == 3){
        resultado = 0;
        cout << "*************" << endl;
        cout << "** Empate! **" << endl;
        cout << "*************" << endl;
    }
        system("pause");
    } //if geral

    
    }//Whille geral
    
    
}