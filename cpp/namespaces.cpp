#include <iostream>
namespace first{
	int x = 5;
}
using namespace std;
int main(){
	int x = 10;
	cout<< first::x<<endl;
	cout<< x <<endl;
}