# offer_jian
**1   exception 有问题**

D:/Program Files/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/bits/exception.h:63:5: note:   candidate expects 0 arguments, 1 provided
D:/Program Files/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/bits/exception.h:60:9: note: candidate: 'constexpr std::exception::exception(const std::exception&)'
   class exception
         ^~~~~~~~~
D:/Program Files/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/bits/exception.h:60:9: note:   no known conversion for argument 1 from 'const char [19]' to 'const std::exception&'
mingw32-make.exe[3]: *** [CMakeFiles\offer9.dir\build.make:62: CMakeFiles/offer9.dir/main.cpp.obj] Error 1
mingw32-make.exe[2]: *** [CMakeFiles\Makefile2:72: CMakeFiles/offer9.dir/all] Error 2
mingw32-make.exe[1]: *** [CMakeFiles\Makefile2:84: CMakeFiles/offer9.dir/rule] Error 2
mingw32-make.exe: *** [Makefile:117: offer9] Error 2