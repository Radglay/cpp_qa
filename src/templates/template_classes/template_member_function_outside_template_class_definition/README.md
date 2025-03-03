**result**:
 
class.h:15:6: error: no declaration matches 'void Base<T>::templateMember()'
   15 | void Base<T>::templateMember()
      |      ^~~~~~~
/app/class.h:11:10: note: candidate is: 'template<class T> template<class U> void Base<T>::templateMember()'
   11 |     void templateMember();
      |          ^~~~~~~~~~~~~~
/app/class.h:7:7: note: 'class Base<T>' defined here
    7 | class Base
 
**godbolt**: https://godbolt.org/z/adroo6oPn