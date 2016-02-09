#include <QObject>

#include <KFooDerived.h> 

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
	Q_D(KFooBase);
	d->someInteger = 0; 
}

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




/*** KFooDerived ***/
 
class KFooDerivedPrivate: public KFooBasePrivate
{
public:
    int anotherInteger;
};
 
KFooDerived::KFooDerived(QObject *parent)
    : KFooBase(*new KFooDerivedPrivate, parent)
{
}
 
KFooDerived::KFooDerived(KFooDerivedPrivate &dd, QObject *parent)
    : KFooBase(dd, parent)
{
}
 
void KFooDerived::setAnotherInteger(int i)
{
    Q_D(KFooDerived);
 
    d->anotherInteger = i;
}
 
int KFooDerived::anotherInteger() const
{
    // in const functions add 'const' to the class name
    Q_D(const KFooDerived);
 
    return d->anotherInteger;
}
 
int KFooDerived::sumOfIntegers() const
{
    // in const functions add 'const' to the class name
    Q_D(const KFooDerived);
 
    return d->someInteger + d->anotherInteger;
}