 /*** KFooBase ***/
class KFooBasePrivate
{
public:
    virtual ~KFooBasePrivate() { }
    int someInteger;
};
 
KFooBase::KFooBase(QObject *parent) 
    : QObject(parent), d_ptr(new KFooBasePrivate)
{
}
 
KFooBase::KFooBase(KFooBasePrivate &dd, QObject *parent)
    : QObject(parent), d_ptr(&dd)
{
}
 
#include <KFooBase.h>
#include <QObject>

// The destructor must be in the .cpp file, even if empty
KFooBase::~KFooBase()
{
}
 
void KFooBase::setSomeInteger(int i)
{
    Q_D(KFooBase);
 
    d->someInteger = i;
}
 
int KFooBase::someInteger() const
{
    // in const functions add 'const' to the class name
    Q_D(const KFooBase);
 
    return d->someInteger;
}