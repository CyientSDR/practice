#ifndef PRACTICE_BASE_IMPL_BASE_H
#define PRACTICE_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>


class practice_base : public Component, protected ThreadedComponent
{
    public:
        practice_base(const char *uuid, const char *label);
        ~practice_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

    private:
};
#endif // PRACTICE_BASE_IMPL_BASE_H
