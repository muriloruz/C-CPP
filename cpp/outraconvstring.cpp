#include <iostream>
using namespace std;
int main(){
    char letras[]={'a','b','c','A','p','a'};
    int cont=0;
    int tamanho = sizeof(letras)/sizeof(letras[0]);
    for(int i=0;i<tamanho; i++){
        letras[i];
        if(static_cast <int>(i)=='A' or static_cast <int>(i)=='a') cont++;
    }
    cout<<cont;
}
