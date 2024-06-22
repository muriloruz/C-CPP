#include <iostream>
#include <vector>
using namespace std;
struct Student {
  string name;
  float time_spent;
  int recent_chapter;
};
struct Date {
    int year;
    int month;
    int day;
};
struct Estudante {
  string name;
  float time_spent;
  int recent_chapter;
  Date last_visit;
};
int main(){

    vector<Student> stndts(100000);
    stndts[0].name = "Bond";
    stndts[0].time_spent = 3.5;
    stndts[0].recent_chapter = 7;
    Date DateOfBirth;
    DateOfBirth.year = 1980;
    DateOfBirth.month = 7;
    DateOfBirth.day = 31;
    Estudante HarryPotter;
    HarryPotter.last_visit.year = 2020;
    HarryPotter.last_visit.month = 12;
    HarryPotter.last_visit.day = 21;
}
