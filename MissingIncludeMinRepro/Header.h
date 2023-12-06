#pragma once
#include "Min.Repro.Test.g.h"

namespace winrt::Min::Repro::implementation
{
    struct Test : TestT<Test>
    {
        void TestX();
        void TestY();
    };
}

namespace winrt::Min::Repro::factory_implementation
{
    struct Test : TestT<Test, implementation::Test>
    {
    };
}