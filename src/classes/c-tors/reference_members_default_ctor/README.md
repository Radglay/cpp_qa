**result**:
 
class.h:6:7: error: uninitialized reference member in 'class Person'
/app/class.h:9:18: note: 'std::string& Person::name' should be initialized
    9 |     std::string& name;
      |                  ^~~~
/app/class.h:6:7: error: uninitialized reference member in 'class Person'
    6 | class Person
      |       ^~~~~~
/app/class.h:10:10: note: 'int& Person::age' should be initialized
   10 |     int& age;
 
**godbolt**: https://godbolt.org/z/GEMGE61Td