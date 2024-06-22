#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    vector<int> numbers(4);
    int auxiliary;
    int k,o;
    for(int j=0;j<numbers.size();j++){
        cin>>numbers[j];
    }
    for(int l=0;l<numbers.size();l++){
        o=l+1;
        cout<<"O "<<o<<"º numero é "<<numbers[l]<<endl;
    }

    /* swap elements #1 and #5 */
    auxiliary  = numbers[0];
    numbers[0] = numbers[4];
    numbers[4] = auxiliary;

    /* swap elements #2 and #4 */
    auxiliary  = numbers[1];
    numbers[1] = numbers[3];
    numbers[3] = auxiliary;
    cout<<"=============================================================="<<endl;
    for(int i=0;i<numbers.size();i++){
        k=i+1;
        cout<<"O "<<k<<"º numero é "<<numbers[i]<<endl;
    }
}
