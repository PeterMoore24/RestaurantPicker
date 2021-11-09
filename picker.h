#ifndef PICKER_H
#define PICKER_H

#include <string>

typedef struct Restaurant {
    string name;
    string url;
};

int standardPick(std::string filename);

#endif