**result**:
 
main.cpp:9:29: error: call of overloaded 'Person(std::nullptr_t)' is ambiguous
    9 |    Person person3 ( nullptr );
      |                             ^
In file included from /app/main.cpp:1:
/app/class.h:15:5: note: candidate: 'Person::Person(int*)'
   15 |     Person(int*)
      |     ^~~~~~
/app/class.h:10:5: note: candidate: 'Person::Person(char*)'
   10 |     Person(char*)
 
**godbolt**: https://godbolt.org/z/qb8q8WEsx