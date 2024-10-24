//
// Created by Oliver on 10/23/2024.
//
#include <string>
#include "getLastName.h"
std::string getLastName(const std::string& fullName) {
    size_t spaceIndex = fullName.find(' ');
    if (spaceIndex != std::string::npos) { // from stack overflow
        return fullName.substr(spaceIndex + 1);
    }
    return "";
}