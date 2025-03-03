**result**:
 
function.h: In function 'void func()':
/app/function.h:20:7: warning: expected 'template' keyword before dependent template name [-Wmissing-template-keyword]
   20 |     t.templateFunc<int>();
      |       ^~~~~~~~~~~~
      |       template
/app/function.h:20:20: error: expected primary-expression before 'int'
   20 |     t.templateFunc<int>();
      |                    ^~~
/app/function.h:20:20: error: expected ';' before 'int'
   20 |     t.templateFunc<int>();
 
**godbolt**: https://godbolt.org/z/G81dn7Yqd