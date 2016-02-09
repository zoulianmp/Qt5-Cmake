
#include <QObject>
#include <KFooDerived.h>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
	/*
	QGuiApplication app(argc, argv);

    qmlRegisterType<PieChart>("Charts", 1, 0, "PieChart");

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:///app.qml"));
    view.show();
    return app.exec();
	*/

	KFooDerived * p_KFD = new KFooDerived(new QObject);

	int I = p_KFD->someInteger();
	p_KFD->setSomeInteger(78);



	int AI = p_KFD->anotherInteger();
	p_KFD->setAnotherInteger(78);


	int ISum = p_KFD->sumOfIntegers();





}
//![0]
