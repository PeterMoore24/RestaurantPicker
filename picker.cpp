#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

#include "picker.h"

using namespace std; //I will fix this later, but for now this is what I know.

int filePick(string filename) {
    ifstream restFile(filename);

    int restNum;
    string buffer;
    getline(restFile, buffer);
    restNum = stoi(buffer);

    srand(time(NULL));
    int lineNo = rand() % restNum;

    string restaurant;
    for (int i = 0; getline(restFile, restaurant); i++) {
        if (i == lineNo) {
            string output = restaurant.substr(0, restaurant.find(';'));
            cout << output << endl;
            string url = "start " + restaurant.substr(restaurant.find(';')+1);
            system(url.c_str());
            break;
        }
    }
    return 0;
}

int main() {
    filePick("DoordashRestaurants.txt");
    

}
