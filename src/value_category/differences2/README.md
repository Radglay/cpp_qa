**result**:
a -> prvalue: false
a -> lvalue: true
a -> xvalue: false
a -> lvalue_reference: true
a -> rvalue_reference: false

std::move(a) -> prvalue: false
std::move(a) -> lvalue: false
std::move(a) -> xvalue: true
std::move(a) -> lvalue_reference: false
std::move(a) -> rvalue_reference: true

c -> prvalue: false
c -> lvalue: true
c -> xvalue: false
c -> lvalue_reference: true
c -> rvalue_reference: false
**godbolt**: https://godbolt.org/z/c39Gjv4dM