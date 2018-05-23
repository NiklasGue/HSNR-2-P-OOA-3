//
// Created by hartings on 23.05.18.
//

#include "Execption.h"

Execption::Execption() {
    _message = "Error: No error message specified";
}

Execption::Execption(std::string errorMessage) {
_message = errorMessage;
}

std::string Execption::getMessage() {
    return _message;
}