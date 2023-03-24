#include "GenericType.h"

namespace coretypes {
    GenericType::GenericType(int initialNum) : mSomeNum(initialNum) {};

    void GenericType::multiplyBy(int num) {
        mSomeNum *= num;
    }
} // coretypes