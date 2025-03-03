**result**:
 
main.cpp:32:21: error: redeclaration of 'ExcplicitPerson explicitPerson1'
   34 |     ExcplicitPerson explicitPerson1 = {20, "Melly"};

main.cpp:35:18: error: converting to 'const ExcplicitPerson' from initializer list would use explicit constructor 'ExcplicitPerson::ExcplicitPerson(int, const std::string&)'
   37 |     printExplicit({30, "Josh"});

main.cpp:36:19: error: invalid initialization of reference of type 'const ExcplicitPerson&' from expression of type 'int'
   38 |     printExplicit(40);

main.cpp:37:18: error: converting to 'const ExcplicitPerson' from initializer list would use explicit constructor 'ExcplicitPerson::ExcplicitPerson(int, const std::string&)'
   39 |     printExplicit({50});
 
**godbolt**: https://godbolt.org/z/EbK3bfWeY