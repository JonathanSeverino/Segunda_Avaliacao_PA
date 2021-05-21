#include <iostream>
#include <string.h>

using namespace std;


//Função que contabiliza o número de trocas
//qvs == que vai sair

int total_trocas(char* v_palavra, char letra_qvs){
    int tam = strlen(v_palavra);
    int t_troca = 0;

    for(int i=0; i < tam; i++){
        if (letra_qvs == v_palavra[i]){
            t_troca += 1;
        }
    }

    return t_troca;
}




//criando função: Ponteiro para vetor palavra, um inteiro para o tamanho
//e outro ponteiro para a nova palavra


int main(){
    
    char* palavra = new char[100];
    char* nova_palavra = new char[100];
    char l_sai, l_entra;

    
    cout << "Informe sua palavra: " << endl;
    cin >> palavra;

    cout << "Informe a letra que vai sair: " << endl;
    cin >> l_sai;

    cout << "Informe a letra que vai entrar: " << endl;
    cin >> l_entra;  

    cout << endl;

    cout << "Total de trocas efetuadas: " << total_trocas(palavra, l_sai) << endl;



    return 0;
}