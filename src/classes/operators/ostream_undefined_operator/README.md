**result**:
 
main.cpp:9:15: error: no match for 'operator<<' (operand types are 'std::ostream' {aka 'std::basic_ostream<char>'} and 'IntVector')
    9 |     std::cout << vec1;
      |     ~~~~~~~~~ ^~ ~~~~
      |          |       |
      |          |       IntVector
      |          std::ostream {aka std::basic_ostream<char>}
 
**godbolt**: https://godbolt.org/z/EqjhKTdrE