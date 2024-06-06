**result**:
```
class.h:24:7: error: deleted function 'virtual Derived::~Derived()' overriding non-deleted function
   24 | class Derived : public Base
      |       ^~~~~~~
```
**godbolt**: https://godbolt.org/z/PaGfbG8n1
