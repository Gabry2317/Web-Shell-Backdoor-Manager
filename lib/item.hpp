#include <iostream>
#include <cstring>
using namespace std;

struct Device {
    string nome;
    string ip;
    int port;
};

int add(string andres, string name,int i, int ports){
    Device pc[100];
    pc[i].nome = name;
    pc[i].ip = andres;
    pc[i].port = ports;
    i++;
    return i;
}