# cpp_qa
C++ questions and answers

How to run each program?  
1) Go to the particular directory with source files  
2) If you want to use online version then visit the link provided in the sub-project README.md file
3) If you want to compile code on your machine then download the sources:
   * `git clone --depth 1 --no-checkout git@github.com:Radglay/cpp_qa.git`
   * `cd cpp_qa ` 
   * `git sparse-checkout set [relative_path_to_directory]` remove the `https://github.com/Radglay/cpp_qa/tree/main/` part from the URL
   * `git checkout`
4) CD to downloaded directory with code  
5) Build and run program with provided commands:
   * `cmake -S .`
   * `cmake --build .`
   * `./main`

