#include <iostream>
#include "parser.tab.h"  // Header file generated by Yacc
using namespace std;

void bookkeeper(const string& variable, double value) {
    cout << "Variable: " << variable << ", Value: " << value << endl;
}
