**result**:
```
main.cpp:8:26: error: 'int Base::public_x' is inaccessible within this context
    8 |     std::cout << derived.public_x << '\n';
main.cpp:9:26: error: 'int Base::protected_x' is protected within this context
    9 |     std::cout << derived.protected_x << '\n';
main.cpp:10:26: error: 'int Base::private_x' is private within this context
   10 |     std::cout << derived.private_x << '\n';              
```
**godbolt**: https://godbolt.org/z/eh6jG9r4h
