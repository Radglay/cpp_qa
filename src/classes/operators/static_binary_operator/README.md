**result**:
```
class.h:31:22: error: 'static IntVector IntVector::operator+(const IntVector&, const IntVector&)' must be either a non-static member function or a non-member function
   31 |     static IntVector operator+ (const IntVector& lhs, const IntVector& rhs)
      |                   
```
**godbolt**: https://godbolt.org/z/z9hf5EP8K
