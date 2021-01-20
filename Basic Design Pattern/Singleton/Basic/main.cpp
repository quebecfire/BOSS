#include <iostream>
#include <thread>
#include "BasicSingleton.h"

void firstThread(){
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    BasicSingleton* singleton = BasicSingleton::getInstance("firstThread");
    std::cout << singleton->getName() << "\n";
}

void secondThread(){
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    BasicSingleton* singleton = BasicSingleton::getInstance("secondThread");
    std::cout << singleton->getName() << "\n";
}

int main() {
    std::cout <<"Same value = singleton was reused\n" <<
              "Different values = singletons were not reused \n\n" <<
              "RESULT:\n";
    std::thread firstT(firstThread);
    std::thread secondT(secondThread);

    firstT.join();
    secondT.join();

    return 0;
}
