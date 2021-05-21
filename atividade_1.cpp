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




//Função que efetua a troca das letras, usando vetores como parametros

char *Troca_letra (char *vet_palavra, char *palavra_nova, char letra_s, char letra_e){

    int tam = strlen(vet_palavra);
        
    for(int i=0; i < tam; i++){
        if(letra_s == vet_palavra[i]){
            vet_palavra[i] = letra_e;
            palavra_nova = vet_palavra;
        }
    }

    return palavra_nova;

}


int main(){
    
    //Declarando variaveis
    char* palavra = new char[100];
    char* nova_palavra = new char[100];
    char l_sai, l_entra;
    int total = 0;

    //Interação com o usuário
    cout << "Informe sua palavra: " << endl;
    cin >> palavra;

    cout << "Informe a letra que vai sair: " << endl;
    cin >> l_sai;

    cout << "Informe a letra que vai entrar: " << endl;
    cin >> l_entra;  

    cout << endl;

    //Pegando o total de trocas e imprimindo os resultados

    total = total_trocas(palavra, l_sai);
    cout << palavra << endl;   
    cout << Troca_letra(palavra, nova_palavra, l_sai, l_entra) << endl;    
    cout << "Total de trocas efetuadas: " << total << endl;  



    return 0;
}