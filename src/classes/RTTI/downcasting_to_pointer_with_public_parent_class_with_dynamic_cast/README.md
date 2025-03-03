**result**:
 
main.cpp:7:28: warning: 'dynamic_cast<class Derived*>(Base base)' can never succeed
    7 |     Derived* derived_ptr = dynamic_cast<Derived*>(&base);
Program terminated with signal: SIGSEGV (nullptr)
 
**godbolt**: https://godbolt.org/z/a7Y61qPG7
