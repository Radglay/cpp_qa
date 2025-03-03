**result**:
main()
global: 0x404030 100
extern_global: 0x404034 200
extern_const_global: 0x402004 30
func() source1
extern_func() source1

print_source1_globals()
global: 0x404030 100
extern_global: 0x404034 200
extern_const_global: 0x402004 300
func() source1
extern_func() source1
**godbolt**: https://godbolt.org/z/xv6xbhK5r