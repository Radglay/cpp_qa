

template <typename T>
void template_func(T t)
{
    int x = 0x111;
};


int main()
{
    template_func(0x111);
    return 0;
}