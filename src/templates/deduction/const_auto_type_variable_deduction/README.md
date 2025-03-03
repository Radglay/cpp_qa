**result**:
error: assignment of read-only reference 'i'
   11 |     i = 99;
      |     ~~^~~~
<source>:15:5: error: increment of read-only reference 'i_ptr'
   15 |     i_ptr++;
**godbolt**: https://godbolt.org/z/jh7Kbr6Ev