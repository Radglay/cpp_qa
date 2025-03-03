**result**:
 
class.h:28:9: error: there are no arguments to 'baseFunc' that depend on a template parameter, so a declaration of 'baseFunc' must be available [-fpermissive]
   28 |         baseFunc();
class.h:29:22: error: 'baseFuncWithT' was not declared in this scope, and no declarations were found by argument-dependent lookup at the point of instantiation
   29 |         baseFuncWithT(T{});
 
**godbolt**: https://godbolt.org/z/rbz3hqcEM