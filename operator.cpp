class My_int
{
private:
    int i = 0;

public:
    My_int(int);
    friend My_int operator+(My_int, My_int);
    int operator()() const
    {
        return i;
    }
};

My_int::My_int(int _i) : i(_i)
{
}

My_int operator+(My_int a, My_int b)
{
    return My_int(a() + b());
}