#include <QObject>

class KFooBasePrivate;
class KFooBase : public QObject
{
public:
    KFooBase(QObject *parent);
    ~KFooBase();
    void setSomeInteger(int i);
    int someInteger() const;
protected:
    const QScopedPointer<KFooBasePrivate> d_ptr;
    KFooBase(KFooBasePrivate &dd, QObject *parent);
private:
    Q_DECLARE_PRIVATE(KFooBase)
};
 
class KFooDerivedPrivate;
class KFooDerived : public KFooBase
{
public:
    KFooDerived(QObject *parent);
    void setAnotherInteger(int i);
    int anotherInteger() const;
    int sumOfIntegers() const;
protected:
    KFooDerived(KFooDerivedPrivate &dd, QObject *parent);
private:
    Q_DECLARE_PRIVATE(KFooDerived)
};