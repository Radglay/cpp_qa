**result**:
```
main.cpp:8:35: error: 'static void Person::operator delete(void*)' is private within this context
    8 |    Person* personPtr = new Person();
      |                                   ^          ^~~~~~
```
**godbolt**: https://godbolt.org/z/chTWEda97