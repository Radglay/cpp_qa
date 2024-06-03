**result**:
```
main.cpp:6:12: error: use of deleted function 'Person::Person()'
    6 |     Person person;
      |            ^~~~~~
In file included from /app/main.cpp:1:
/app/class.h:6:7: note: 'Person::Person()' is implicitly deleted because the default definition would be ill-formed:
    6 | class Person
      |       ^~~~~~
/app/class.h: At global scope:
/app/class.h:6:7: error: uninitialized const member in 'class Person'
/app/class.h:10:15: note: 'const int Person::age' should be initialized
   10 |     const int age;
      |               ^~~                 ^~~~~~~
```
**godbolt**: https://godbolt.org/z/EMhYaq94x