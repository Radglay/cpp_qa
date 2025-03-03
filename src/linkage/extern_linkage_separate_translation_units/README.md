**result**:
main()
global: 0x404030 100
extern_global: 0x404034 200
extern_const_global: 0x402040 300
// can't use constexpr in another Translation Unit...
func()
extern_func()

print_source1_globals()
global: 0x404030 100
extern_global: 0x404034 200
extern_const_global: 0x402040 300
extern_constexpr_global: 0x402044 400
func()
extern_func()
**godbolt**: