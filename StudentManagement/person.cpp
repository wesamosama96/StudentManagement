#include "person.h"
#include <string>
using namespace std;
Person::Person(string n) : name(n) {}
string Person::getName() const { return name; }