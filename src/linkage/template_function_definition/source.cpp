template <typename T>
void template_func(T t)
{
    int x = 0x222;
};


void test()
{
    template_func<int>(0x222);
}