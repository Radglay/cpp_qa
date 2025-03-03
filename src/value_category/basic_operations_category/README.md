**result**:
is lvalue?
a: false, (a): true
a + b: false, (a + b): false
a = b: true, (a = b): true
a += b: true, (a += b): true
a++: false, (a++): false
++a: true, (++a): true
&a: false, (&a): false
static_cast<int&>(a): true, (static_cast<int&>(a)): true
10: false, (10): false
func(): false, (func()): false
func_ref(): true, (func_ref()): true
func_r_ref(): false, (func_r_ref()): false
**godbolt**: https://godbolt.org/z/r5sM3PfoG