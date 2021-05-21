#include <iostream>
#include <string.h>

using namespace std;


//Função que contabiliza o número de trocas
//qvs == que vai sair
/*
int total_trocas(char* v_palavra, int tamanho, char letra_qvs){

    int t_troca = 0;

    for(int i=0; i < tamanho; i++){
        if (letra_qvs == v_palavra[i]){
            t_troca ++;
        }
    }

    return t_troca;
}

*/


//criando função: Ponteiro para vetor palavra, um inteiro para o tamanho
//e outro ponteiro para a nova palavra


int main(){
    int tamanhoV = 0;
    char palavra[tamanhoV], nova_palavra[tamanhoV];
    char l_sai, l_entra;

    cout << "Informe o total de letras da sua palavra: " << endl;
    cin >> tamanhoV;

    cout << "Informe sua palavra: " << endl;
    cin >> palavra;

    cout << "Informe a letra que vai sair: " << endl;
    cin >> l_sai;

    cout << "Informe a letra que vai entrar: " << endl;
    cin >> l_entra;  

    cout << endl;

    cout << total_trocas(&palavra, tamanhoV, l_sai);



    return 0;
}