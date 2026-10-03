#include <iostream>
#include <cstring>
#include <map>
#include "lib//item.hpp"

#define ER1 cout<<"NESSUN SOTTOCOMANDO PASSATO (ER. 1)"
#define ER2 cout<<"ARGOMENTO NON VALIDO (ER. 2)"

using namespace std;

void additem();

int main(int ARN, char* ARV[]){
    
    //map
    map<string, int> command;
    command["status"] = 0;
    command["shell"] = 1;
}