
class TestClass
{
public:
    int variable;
    void testFunction()
    {
        int x = 0x111;
    }
};

int main()
{
    TestClass test;
    test.variable = 0x100;
    test.testFunction();

    return 0;
}
