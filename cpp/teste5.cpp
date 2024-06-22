#include <iostream>
using namespace std;
int main(){
    int variable1 = 1, variable2 = 2, auxiliary;
    cout<<variable1<<endl;
    cout<<variable2<<endl;
    cout<<auxiliary<<endl;
    auxiliary = variable1;
    variable1 = variable2;
    variable2 = auxiliary;
    cout<<variable1<<endl;
    cout<<variable2<<endl;
    cout<<auxiliary<<endl;
}
