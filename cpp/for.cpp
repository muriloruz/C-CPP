#include <iostream>

using namespace std;
void exemplo(){
	int number;
	int max = -100000;
	int counter = 0;
	for (;;) {
        cout<<"Enter the number\n---> ";
		cin >> number;
		if (number == -1)
			break;
		counter++;
		if (number > max)
			max = number;
	}
	if (counter)
		cout << "The largest number is " << max << endl;
	else
		cout << "Are you kidding? You haven't entered any number!" << endl;
}
int main()
{
	int pow = 1;

	for(int exp = 0; exp < 16; exp++) {
		cout << "2 to the power of " << exp << " is " << pow << endl;
		pow *= 2;
	}
	exemplo();
}