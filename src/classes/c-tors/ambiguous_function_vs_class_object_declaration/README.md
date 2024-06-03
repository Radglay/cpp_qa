**result**:
```
main.cpp:7:25: warning: empty parentheses were disambiguated as a function declaration [-Wvexing-parse]
    7 |    Person func_or_object();
      |                         ^~
/app/main.cpp:7:25: note: remove parentheses to default-initialize a variable
    7 |    Person func_or_object();
      |                         ^~

function
```
**godbolt**: https://godbolt.org/z/YEv6h1EcP