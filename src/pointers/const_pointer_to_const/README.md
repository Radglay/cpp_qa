**result**:
error: assignment of read-only location '*(const int*)ptr'
    9 |     *ptr = 99;
      |     ~~~~~^~~~
<source>:10:9: error: assignment of read-only variable 'ptr'
   10 |     ptr = nullptr;
      |     ~~~~^~~~~~~~~
**godbolt**: https://godbolt.org/z/nPse7zfjf