#include "SomeTopic.h"

#include <utility>

namespace component {
    namespace topics {
        SomeTopic::SomeTopic(int num, std::string name) : mSomeVar(types::SomeComponentType(num, std::move(name))) {}
    } // component
} // topics