//
// Created by vmorin on 1/17/2021.
//

#ifndef BOSS_BASICSINGLETON_H
#define BOSS_BASICSINGLETON_H


class BasicSingleton {
private:
    // Private constructor, so there's no direct construction call with
    // the "new" operator.
    BasicSingleton(const std::string nameValue):  name(nameValue){};

    static BasicSingleton* instance;
    std::string name;
public:
    // Removing clone option
    BasicSingleton(BasicSingleton &other) = delete;

    // Removing the assignation operator
    void operator=(const BasicSingleton &) = delete;

    // Return the only instance of the object created
    static BasicSingleton *getInstance(const std::string& nameValue);

    std::string getName() {
        return name;
    }
};

BasicSingleton* BasicSingleton::instance = nullptr;

BasicSingleton* BasicSingleton::getInstance(const std::string& nameValue) {
    if (instance == nullptr) {
        instance = new BasicSingleton(nameValue);
    }
    return instance;
}

#endif //BOSS_BASICSINGLETON_H
