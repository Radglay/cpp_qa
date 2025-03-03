**result**:
error: 'int A::func()' should have been declared inside 'A'
   19 | int A::func()
      |             ^
<source>: In function 'int A::func()':
<source>:21:12: error: reference to 'i' is ambiguous
   21 |     return i;
      |            ^
<source>:13:13: note: candidates are: 'int A::{anonymous}::i'
   13 |         int i = 20;
      |             ^
<source>:8:9: note:                 'int A::i'
    8 |     int i = 10;
      |         ^
<source>: At global scope:
<source>:12:13: warning: 'int A::{anonymous}::func()' used but never defined
   12 |         int func();
**godbolt**: https://godbolt.org/z/jEb56oMd4