//
// Created by Oliver on 10/23/2024.
//
#include <string>
#include "getFirstName.h"

std::string getFirstName(const std::string& fullName) {
    int spaceIndex = fullName.find(' ');
    if (spaceIndex != std::string::npos) { //from stackoverflow
        return fullName.substr(0, spaceIndex);
    }
    return ""; //returns empty if nothing is found
}