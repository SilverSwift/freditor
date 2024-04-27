//#include <QGuiApplication>
#include <QApplication>
#include <QQmlApplicationEngine>

#include "testqsci.h"

int main(int argc, char** argv)
{
//    QGuiApplication app (argc, argv);
    QApplication app (argc, argv);

    TestQsci t;
    t.show();


//    QQmlApplicationEngine engine(QStringLiteral("qrc:/qml/main.qml"));

    return app.exec();
}

