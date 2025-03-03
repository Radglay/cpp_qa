**result**:
 
main.cpp:7:23: error: cannot 'dynamic_cast' 'base_ptr1' (of type 'volatile class Base*') to type 'class Base*' (conversion casts away constness)
    7 |     Base* base_ptr2 = dynamic_cast<Base*>(base_ptr1);
 
**godbolt**: https://godbolt.org/z/TPr3cn814
