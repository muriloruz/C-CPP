#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct S1 {
  int f1;
};

struct S2 {
  char f1;
};
int main(){
    S1 str1;
    S2 str2;
    str1.f1 = 32;
    str2.f1 = str1.f1;
}