#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	vector<int> array {1, 2, 3};
	int *ptr1 = array.data()+1;//+1 pula um elemento do array
    printf("%d",*ptr1);

}
