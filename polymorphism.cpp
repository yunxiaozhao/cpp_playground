#include <iostream>

class Master
{
public:
    Master(int _i) : i(_i) {}

    void operator()() const
    {
        std::cout << "Master final cout" << std::endl;
    }

    virtual void operator()(int i) const
    {
        std::cout << "Master cout" << std::endl;
    }

    virtual void operator()(double d) const = 0;

protected:
    int i;
};

class Slave : public Master
{
public:
    Slave(int _i) : Master(_i) {}

    virtual void operator()(int i) const override
    {
        std::cout << "Slave cout" << std::endl;
    }

    virtual void operator()(double d) const override
    {
        std::cout << "Slave implements Master pure virtual function" << std::endl;
    }
};

int main()
{
    Slave slave(3);
    // 运行slave()会发生runtime error, 派生类中的重写会覆盖基类中的重载
    slave.Master::operator()();
    slave(3);
    slave(3.);

    return EXIT_SUCCESS;
}