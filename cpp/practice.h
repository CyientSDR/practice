#ifndef PRACTICE_I_IMPL_H
#define PRACTICE_I_IMPL_H

#include "practice_base.h"

class practice_i : public practice_base
{
    ENABLE_LOGGING
    public:
        practice_i(const char *uuid, const char *label);
        ~practice_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // PRACTICE_I_IMPL_H
