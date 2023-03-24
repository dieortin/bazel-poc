#ifndef POC_SOMETOPIC_H
#define POC_SOMETOPIC_H

#include "component/types/SomeComponentType.h"

namespace component {
    namespace topics {

        class SomeTopic {
        public:
            SomeTopic(int num, std::string name);

            types::SomeComponentType mSomeVar;
        };

    } // component
} // topics

#endif //POC_SOMETOPIC_H
