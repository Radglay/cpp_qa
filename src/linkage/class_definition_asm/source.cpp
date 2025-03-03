
class TestClass
{
public:
    int variable;
    void testFunction()
    {
        int x = 0x222;
    }
};


void test()
{
    TestClass test;
    test.variable = 0x200;
    test.testFunction();
}