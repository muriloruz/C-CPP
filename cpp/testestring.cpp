#include <iostream>
#include <locale.h>
using namespace std;
int main(){
    string plv[] ={"ASDFGFGDAAADFSGFREGFSADF"};
    int tamanho = sizeof(plv)/sizeof(plv[0]);
    int cont;
    for(int i=0;i<tamanho-1;i++){
        for(int j;j<tamanho-1;j++){
            if(plv[j]=="A" or plv[j]=="a") cont++;
        }
    }
    cout<<"Tem um total de "<<cont<<" 'A's";
}
