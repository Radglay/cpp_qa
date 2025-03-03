**result**:
 
/opt/compiler-explorer/gcc-trunk-20240614/bin/../lib/gcc/x86_64-linux-gnu/15.0.0/../../../../x86_64-linux-gnu/bin/ld: CMakeFiles/main.dir/src1.cpp.o: in function `func1()':
src1.cpp:19:(.text+0x10): undefined reference to `Base<int>::func()'
/opt/compiler-explorer/gcc-trunk-20240614/bin/../lib/gcc/x86_64-linux-gnu/15.0.0/../../../../x86_64-linux-gnu/bin/ld: CMakeFiles/main.dir/src2.cpp.o: in function `func2()':
src2.cpp:20:(.text+0x10): undefined reference to `Base<int>::func()'
collect2: error: ld returned 1 exit status
 
**godbolt**: https://godbolt.org/z/G5coPWWcM