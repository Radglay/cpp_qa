**result**:
undefined reference to `static_global'
undefined reference to `static_global'
undefined reference to `const_global'
undefined reference to `const_global'
undefined reference to `static_const_global'
undefined reference to `static_const_global'
undefined reference to `static_func()'

error: declaration of 'constexpr' variable 'constexpr_global' is not a definition
    7 | extern constexpr int constexpr_global;
      |                      ^~~~~~~~~~~~~~~~
/app/main.cpp:10:22: error: declaration of 'constexpr' variable 'static_constexpr_global' is not a definition
   10 | extern constexpr int static_constexpr_global;

**godbolt**: https://godbolt.org/z/EK9YasYE7