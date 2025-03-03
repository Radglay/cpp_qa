**result**:
error: redefinition of 'int TEST::NESTED::y'
   16 | int TEST::NESTED::y = n;
      |     ^~~~
<source>:10:13: note: 'int TEST::NESTED::y' previously declared here
   10 |         int y;
      |             ^
<source>:17:5: error: redefinition of 'int TEST::NESTED::z'
   17 | int TEST::NESTED::z = m;
      |     ^~~~
<source>:11:13: note: 'int TEST::NESTED::z' previously declared here
   11 |         int z;
**godbolt**: https://godbolt.org/z/oEsjToWGh