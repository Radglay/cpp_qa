**result**:
main()
global: 100
extern_global: 200
extern_const_global: 300
func()
extern_func()

error: declaration of 'constexpr' variable 'extern_constexpr_global' is not a definition
    8 | extern constexpr int extern_constexpr_global;
      |                      ^~~~~~~~~~~~~~~~~~~~~~~
**godbolt**: https://godbolt.org/z/WdPdM4Kcr