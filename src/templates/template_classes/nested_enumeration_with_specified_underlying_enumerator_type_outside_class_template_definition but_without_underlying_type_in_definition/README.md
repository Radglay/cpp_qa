**result**:
```
class.h:12:15: error: underlying type mismatch in enum 'enum Base<T>::Values'
   12 | enum Base<T>::Values { a, b, c };
      |               ^~~~~~
/app/class.h:8:19: note: previous definition here
    8 |     enum Values : int;
      |                   ^~~
/app/main.cpp: In function 'int main()':
/app/main.cpp:7:35: error: 'c' is not a member of 'Base<int>::Values'
    7 |     auto val = Base<int>::Values::c;
      |                                   ^
```
**godbolt**: https://godbolt.org/z/crfMs5PoY