#include <QApplication>

#include "toplevelcontainer.h"
//#include "presentation/mainwindow.h"

int main(int argc, char** argv)
{
    QApplication app (argc, argv);

    TopLevelContainer container;
    container.show();

    return app.exec();
}

