**result**:
error: use of deleted function 'U::U()'
   17 |     U u;
      |       ^
<source>:9:7: note: 'U::U()' is implicitly deleted because the default definition would be ill-formed:
    9 | union U
      |       ^
<source>: At global scope:
<source>:12:10: error: union member 'U::d2' with non-trivial 'Data::Data()'
   12 |     Data d2;
      |          ^~
<source>: In function 'int main()':
<source>:17:7: note: use '-fdiagnostics-all-candidates' to display considered candidates
   17 |     U u;
**godbolt**: https://godbolt.org/z/nadYa1a4n