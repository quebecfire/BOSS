//
// Created by vmorin on 1/17/2021.
//

#ifndef BOSS_LAZYSINGLETON_H
#define BOSS_LAZYSINGLETON_H


class LazySingleton {
    private:// Create an instance of the class
    static LazySingleton instance = null;

    // Private constructor, so it cannot be instantiated outside this class.
    LazySingleton() {};
public:
    // Return the only instance of the object created
    static LazySingleton getInstance() {
        if (instance == null) {
            instance = new LazySingleton();
        }
        return instance;
    }
};

#endif //BOSS_LAZYSINGLETON_H
