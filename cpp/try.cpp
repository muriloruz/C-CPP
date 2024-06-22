#include <iostream>
#include <vector>
using namespace std;
void vulgoPushB(){
	vector <int> v;
	int a;
	int p;
	v.push_back(10);
	v.push_back(30);
	//push_back() armazena o valor digitado
	for(int i;i<v.size();i++){
		cout<<"Digita ai"<<endl;
		cin>> a;
		v.push_back(a);
		cout<<"HERE:"<<v[i]<<endl;
	}		
}
void trIy(){
	
}
int main(){
	vulgoPushB();
}