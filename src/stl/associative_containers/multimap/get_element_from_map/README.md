**result**:
error: no match for 'operator[]' (operand types are 'std::multimap<int, std::__cxx11::basic_string<char> >' and 'int')
   26 |     std::cout << map1[1] << ' ' << map1.at(1) << '\n';
      |                      ^
<source>:26:41: error: 'class std::multimap<int, std::__cxx11::basic_string<char> >' has no member named 'at'
   26 |     std::cout << map1[1] << ' ' << map1.at(1) << '\n';
**godbolt**: https://godbolt.org/z/M1K8W8jv6