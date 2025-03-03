**result**: error: template-id 'func<const int>' for 'void func(int&)' does not match any template declaration
   10 | void func<const int> (int& t)
      |      ^~~~~~~~~~~~~~~
<source>:5:6: note: candidate is: 'template<class T> void func(const T&)'
    5 | void func(const T& t)
**godbolt**: https://godbolt.org/z/7Wj94eT53