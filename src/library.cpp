#include <templates/templates.hpp>

namespace library {

int myfunc()
{
    return 2;
}

int myfunc2()
{
    return templates::sq(5);
}

} // library

