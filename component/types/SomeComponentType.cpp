#include "SomeComponentType.h"

#include <utility>

namespace component {
    namespace types {

        SomeComponentType::SomeComponentType(int initialNum, std::string mName) : GenericType(initialNum),
                                                                                  mName(std::move(mName)) {};

        std::string SomeComponentType::getName() {
            return mName;
        }
    } // component
} // types