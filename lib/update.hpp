#include <iostream>
#include <cstdlib>
using namespace std;

void update() {
    int result;

    result = system("git fetch origin");
    if (result != 0) {
        cout << "Errore durante git fetch\n";
        return;
    }

    result = system("git pull origin main");
    if (result != 0) {
        cout << "Errore durante git pull\n";
        return;
    }

    cout << "Update completato!\n";
}

void reinstall() {
    int result;

    result = system("git fetch origin");
    if (result != 0) {
        cout << "Errore: git fetch\n";
        return;
    }

    result = system("git reset --hard origin/main");
    if (result != 0) {
        cout << "Errore: git reset\n";
        return;
    }

    result = system("git clean -fd");
    if (result != 0) {
        cout << "Errore: git clean\n";
        return;
    }

    std::cout << "Repository aggiornato correttamente!\n";
}