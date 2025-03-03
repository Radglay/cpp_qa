**result**:
error: 'z' was not declared in this scope
    7 |     int y = z + 1;
      |             ^
<source>: In function 'int main()':
<source>:13:18: error: 'y' was not declared in this scope; did you mean 'TEST::y'?
   13 |     std::cout << y << '\n';
      |                  ^
      |                  TEST::y
<source>:7:9: note: 'TEST::y' declared here
    7 |     int y = z + 1;
**godbolt**: https://godbolt.org/z/7EdYo4jGK