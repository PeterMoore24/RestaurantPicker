#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

#include "picker.h"

using namespace std; //I will fix this later, but for now this is what I know.

int standardPick(string filename) {
    
}

int main() {
    
    ifstream restFile("Restaurants.txt");

    int restNum;
    string buffer;
    getline(restFile, buffer);
    restNum = stoi(buffer);

    srand(time(NULL));
    int lineNo = rand() % restNum;
    cout << lineNo << endl;

    string restaurant;
    for (int i = 0; getline(restFile, restaurant); i++) {
        if (i == lineNo) {
            cout << restaurant << endl;
            break;
        }
    }

}
