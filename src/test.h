#pragma once

class ITest {
    public:
    virtual int test() = 0;
};

class Test : ITest {
public:
    int test();
};