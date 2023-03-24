#ifndef POC_GENERICTYPE_H
#define POC_GENERICTYPE_H

namespace coretypes {

    class GenericType {
    public:
        explicit GenericType(int initialNum);

        int mSomeNum;

        void multiplyBy(int num);
    };

} // coretypes

#endif //POC_GENERICTYPE_H
