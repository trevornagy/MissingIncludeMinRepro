#include "pch.h"
#include "Header.h"

// Here is the issue:
#if __has_include("Min.Repro.Test.g.cpp")
#    include "Min.Repro.Test.g.cpp"
#endif

#include "Min.Repro.Test.g.cpp"


#ifdef TEST_INCLUDES
#    include <string>
#    include "Min.Repro.Test.g.cpp"
#endif // TEST_INCLUDES



namespace winrt::Min::Repro::implementation
{
    void Test::TestX()
    {
        std::string x = "I'm using a string!";
    }

    void Test::TestY()
    {

    }
}
