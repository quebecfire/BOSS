//
// Created by vmorin on 1/17/2021.
//

#ifndef BOSS_BASICSINGLETON_H
#define BOSS_BASICSINGLETON_H


class BasicSingleton {
private:
    // Create an instance of the class
    BasicSingleton instance = new BasicSingleton();

    // Private constructor, so it cannot be instantiated outside this class.
    BasicSingleton() {};
public:
    // Return the only instance of the object created
    BasicSingleton getInstance() {
        return instance;
    }
};

#endif //BOSS_BASICSINGLETON_H
