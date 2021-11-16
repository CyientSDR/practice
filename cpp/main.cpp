#include <iostream>
#include "ossie/ossieSupport.h"

#include "practice.h"
int main(int argc, char* argv[])
{
    practice_i* practice_servant;
    Component::start_component(practice_servant, argc, argv);
    return 0;
}

