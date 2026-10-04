#include <iostream>
#include <cstring>
#include <map>
#include "update.hpp"
#include <fstream>

#define ER1 cout<<"NESSUN SOTTOCOMANDO PASSATO (ER. 1)"
#define ER2 cout<<"ARGOMENTO NON VALIDO (ER. 2)"

using namespace std;

void device();
void shell();

int main(int ARN, char* ARV[]){
    
    //map
    map<string, int> command;
    command["device"] = 0;
    command["shell"] = 1;
    command["update"] = 2;

    switch (command[ARV[1]]){
    case 0:
        break;
    case 1:
        break;
    
    
    case 2:
        if (strcmp(ARV[2], "--reinstall") == 0){
            reinstall();
        } else{
            update();
        }
        break;
    
    default:
        ER2;
        break;
    }
    
}

void device(){

}

void shell(){
    
}