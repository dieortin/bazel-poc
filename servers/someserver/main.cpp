#include <iostream>

#include "SomeTopic.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto topic = component::topics::SomeTopic(6, "Margarita");

    std::cout << "Number is currently " << topic.mSomeVar.mSomeNum << ". Now let's multiply it by 9!" << std::endl;

    topic.mSomeVar.multiplyBy(9);

    std::cout << "Number is now " << topic.mSomeVar.mSomeNum << std::endl;

    std::cout << "And the name is " << topic.mSomeVar.getName() << std::endl;

    return 0;
}
