**result**:
error: could not convert 'ptr' from 'Base*' to 'std::unique_ptr<Base>'
   12 |     func(ptr);
      |          ^~~
      |          |
      |          Base*
gmake[2]: *** [CMakeFiles/main.dir/build.make:76: CMakeFiles/main.dir/main.cpp.o] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/main.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2
**godbolt**: https://godbolt.org/z/77fof4PqP