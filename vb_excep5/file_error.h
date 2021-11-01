//
// Created by Bryan on 19/08/2018.
//

#ifndef VB_EXCEP5_FILE_ERROR_H
#define VB_EXCEP5_FILE_ERROR_H

#include <stdexcept>
using namespace std;

class file_error : public runtime_error {
public:
    file_error() : runtime_error("can't open file") {}
    file_error(const string &what) : runtime_error(what) {}
};


#endif //VB_EXCEP5_FILE_ERROR_H
