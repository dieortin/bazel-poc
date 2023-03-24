#ifndef POC_SOMECOMPONENTTYPE_H
#define POC_SOMECOMPONENTTYPE_H

#include <string>
#include "GenericType.h"

namespace component {
    namespace types {

        class SomeComponentType : public coretypes::GenericType {
        public:
            SomeComponentType(int initialNum, std::string mName);

            std::string getName();

        private:
            std::string mName;

        };

    } // component
} // types

#endif //POC_SOMECOMPONENTTYPE_H
