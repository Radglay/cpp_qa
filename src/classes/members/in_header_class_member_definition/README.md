**result**:
 
multiple definition of `Person::printName()'; CMakeFiles/main.dir/source1.cpp.o:/app/class.h:20: first defined here
collect2: error: ld returned 1 exit status
gmake[2]: *** [CMakeFiles/main.dir/build.make:129: main] Error 1
gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/main.dir/all] Error 2
gmake: *** [Makefile:91: all] Error 2
 
**godbolt**: https://godbolt.org/z/cr4Gbceo9
