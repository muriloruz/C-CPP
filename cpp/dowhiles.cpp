#include <iostream>

using namespace std;
void exemplo(){
    int number;
	int max = -100000;
	int counter = 0;

	do {
		cin >> number;
		if(number == -1)
			continue;
		counter++;
		if(number > max)
			max = number;
	} while (number != -1);
	if(counter)
		cout << "The largest number is " << max << endl;
	else
		cout << "Are you kidding? You haven't entered any number!" << endl;
}
int main()
{
    int number;
    int max = -100000;
    int counter = 0;
    do {
        cin >> number;
        if (number != -1)
            counter++;
        if (number > max)
            max = number;
    } while (number != -1);
    if (counter)
        cout << "The largest number is " << max << endl;
    else
        cout << "Are you kidding? You haven't entered any number!" << endl;
    exemplo();
}
