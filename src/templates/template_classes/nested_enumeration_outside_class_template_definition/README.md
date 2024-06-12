**result**:
```
class.h:8:10: error: use of enum 'Values' without previous declaration
    8 |     enum Values;
      |          ^~~~~~
/app/main.cpp: In function 'int main()':
/app/main.cpp:7:16: error: 'enum Base<int>::Values' is private within this context
    7 |     auto val = Base<int>::Values::c;
```
**godbolt**: https://godbolt.org/z/Wf3rTj3Ka