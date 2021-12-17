#ifndef PICKER_H
#define PICKER_H

#include <string>

typedef struct Restaurant {
    std::string name;
    std::string url;
};

int filePick(std::string filename);
int fileClean(std::string filename);
#endif