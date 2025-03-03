**result**:
N = 1, sizeof(T) = 4
list: 24, allocated memory: 24
forward_list: 8, allocated memory: 16
vector: 24, allocated memory: 4
deque: 80, allocated memory: 576
array: 4, allocated memory: 0

N = 100, sizeof(T) = 4
list: 24, allocated memory: 2400
forward_list: 8, allocated memory: 1600
vector: 24, allocated memory: 400
deque: 80, allocated memory: 576
array: 400, allocated memory: 0

N = 1000, sizeof(T) = 4
list: 24, allocated memory: 24000
forward_list: 8, allocated memory: 16000
vector: 24, allocated memory: 4000
deque: 80, allocated memory: 4176
array: 4000, allocated memory: 0

N = 10000, sizeof(T) = 4
list: 24, allocated memory: 240000
forward_list: 8, allocated memory: 160000
vector: 24, allocated memory: 40000
deque: 80, allocated memory: 41096
array: 40000, allocated memory: 0
**godbolt**: https://godbolt.org/z/Tb8oMbdaj