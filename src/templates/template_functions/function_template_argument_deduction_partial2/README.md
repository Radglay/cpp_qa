**result**:
 
main.cpp:7:20: error: no matching function for call to 'convert(double)'
    7 |     int j = convert(1.0);
      |             ~~~~~~~^~~~~
In file included from /app/main.cpp:1:
/app/function.h:5:4: note: candidate: 'template<class To, class From> To convert(From)'
    5 | To convert(From f)
 
**godbolt**: https://godbolt.org/z/5c6oTKMnf