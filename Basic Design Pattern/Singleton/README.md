# Singleton Pattern

## BasicSingleton
The basic singleton will be instantiated during the class loading.
This is due to the variable instance is instantiated outside any method.

This drawback of this method is that if the class is not being used at all by the 
application. It will still be instantiated.

## The LazySingleton
The , as the name specify it, is very lazy.
The instance is declared null. 
It will only get instantiate if we request it, otherwise it won't do anything.

This is why within the getInstance() method, if it never has been called.
We will instantiate the class.