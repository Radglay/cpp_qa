**result**:
8:12: warning: address of local variable 'a' returned [-Wreturn-local-addr]
    8 |     return &a;

Program terminated with signal: SIGSEGV
**godbolt**: https://godbolt.org/z/3Psb5jW5s