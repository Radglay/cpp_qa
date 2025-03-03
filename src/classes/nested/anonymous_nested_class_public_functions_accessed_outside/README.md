**result**:
 
class.h:16:14: error: 'void Outer::<unnamed class>::inner_func()' invalid; an anonymous struct may only have public non-static data members [-fpermissive]
   16 |         void inner_func()
      |              ^~~~~~~~~~
class.h:21:14: error: 'void Outer::<unnamed class>::common_func()' invalid; an anonymous struct may only have public non-static data members [-fpermissive]
   21 |         void common_func()
      |              ^~~~~~~~~~~
class.h:26:14: error: 'void Outer::<unnamed class>::common_static_func()' invalid; an anonymous struct may only have public non-static data members [-fpermissive]
   26 |         void common_static_func(
 
**godbolt**: https://godbolt.org/z/5zrnMWMoY
