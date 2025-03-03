**result**:
 
main.cpp:7:50: error: 'Base' is an inaccessible base of 'Derived'
    7 |     Base* base_ptr = dynamic_cast<Base*>(&derived);
      |                                                  ^
 
**godbolt**: https://godbolt.org/z/Thaos1ob1
