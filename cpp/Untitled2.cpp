#include <iostream>
#include <vector>
using namespace std;
void exemp(){
   	vector<int> vect(0);

	vect.push_back(1);
	vect.push_back(-1);
	vect.push_back(0);
	cout << vect.size()<< endl;
	for(int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;
}
int main(){
    vector<float> float_vec(10);
    vector<char> name(35);
    vector<bool> votes(100);
    float float_ve[10];
    int tamanho = float_vec.size();
    int tamanhoOld = sizeof(float_ve);
    char surname[20];
    bool vote[100];
    /* Vetores de Vetores, ou como é chamado, matrizes: */
    vector<vector<int>> chessboard(8, vector<int>(8));
    int chesboard[8][8];
    exemp();
}
