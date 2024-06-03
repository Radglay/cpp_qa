**result**:
```
class.h: In constructor 'Person::Person(const std::string&, int, std::string&, int&)':
/app/class.h:9:5: error: uninitialized const member in 'const int' [-fpermissive]
    9 |     Person(const std::string& p_name, int p_age, std::string& p_address, int& p_number)
      |     ^~~~~~
/app/class.h:19:15: note: 'const int Person::age' should be initialized
   19 |     const int age;
      |               ^~~
/app/class.h:9:5: error: uninitialized reference member in 'std::string&' {aka 'class std::__cxx11::basic_string<char>&'} [-fpermissive]
    9 |     Person(const std::string& p_name, int p_age, std::string& p_address, int& p_number)
      |     ^~~~~~
/app/class.h:20:18: note: 'std::string& Person::address' should be initialized
   20 |     std::string& address;
      |                  ^~~~~~~
/app/class.h:9:5: error: uninitialized reference member in 'int&' [-fpermissive]
    9 |     Person(const std::string& p_name, int p_age, std::string& p_address, int& p_number)
      |     ^~~~~~
/app/class.h:21:10: note: 'int& Person::number' should be initialized
   21 |     int& number;
      |          ^~~~~~
/app/class.h:11:16: error: no match for 'operator=' (operand types are 'const std::string' {aka 'const std::__cxx11::basic_string<char>'} and 'const std::string' {aka 'const std::__cxx11::basic_string<char>'})
   11 |         name = p_name;
```
**godbolt**: https://godbolt.org/z/r1111PfGh