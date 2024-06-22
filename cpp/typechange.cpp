#include <iostream>
using namespace std;

int main()
{
	char character = 'X';
	int integer = character;
	cout<< static_cast <int>(character);
	cout<< " " << static_cast<char>(integer);
}