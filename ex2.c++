/***** 
2-) Desenvolva um programa onde você crie 3 variáveis e inicialize-as com o valor que quiser, 
um vetor de 10 posições que receba os valores diretamente dentro do programa como: 0,10,20,30,40,50,60,70,80,90 e também 4 ponteiros chamados pt1, pt2, pt3 e vaux.

- Atribuir o pt1 ao endereço de memória de a, pt2 ao de b e pt3 ao de c;

- Exiba na tela o endereço de memória de a e o do ponteiro pt1;

- Exiba na tela o valor da variável apontada por pt1;

- Atribuir o valor do endereço de memória da posição 1 do vetor já criado para o ponteiro vaux e exibir na tela o valor da variável apontada pelo ponteiro;

- Agora varra o vetor de 2 em 2 a partir da posição 1 (ex. 1,3,5,7,9) e acrescente o valor de + 10 em cada posição, exibir na tela os valores dos vetores criados acima.

Ex. v[1] = 20, v[3] = 40...
******/

#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 30;
    int c = 50;
    int vet[] = {0,10,20,30,40,50,60,70,80,90};
    
    int *vaux; 
    int *pt1; 
    int *pt2; 
    int *pt3;
    int i; 
    
    pt1 = &a;
    pt2 = &b; 
    pt3 = &c; 
    
    cout << "endereço de memória A: " << &a << endl; 
    cout << "endereço de memória PT1: " << &pt1 << endl; 
    
    cout << "valor atual PT1: " << *pt1 << endl; 
    
    vaux = &vet[1];
    
    cout << "valor da variável apontada pelo ponteiro: " << *vaux << endl; 

    for(i = 1; i < 10; i = i + 2){
        //for que corre o array de 2 em 2
        *vaux = *vaux + 10; //atribuindo o valor que acresce + 10 do valor ja existente
        cout << "o conteudo de v[" << i << "] = " << *vaux << endl; 
        vaux = vaux + 2; //esta varrendo o array de 2 em 2
    }
}    


