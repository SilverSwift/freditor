#include "toplevelcontainer.h"

#include <QStatusBar>

#include "domain/commandhandler.h"
#include "presentation/mainwindow.h"
#include "presentation/menubar.h"

#include <Qsci/qsciscintilla.h>

TopLevelContainer::TopLevelContainer(QObject *parent)
    : QObject{parent}
    , pHandler ( new CommandHandler{this} )
{
    mWindow.reset( new MainWindow {} );

    mWindow->setCentralWidget(new QsciScintilla{ });
    mWindow->setStatusBar( new QStatusBar{ });

    setupMenuBar();
}

void TopLevelContainer::show()
{
    mWindow->show();
}

void TopLevelContainer::setupMenuBar()
{
    auto menuBar = new MenuBar {};
    mWindow->setMenuBar(menuBar);

    connect(menuBar, &MenuBar::commandTrigered,
            pHandler, &CommandHandler::onCommandTriggered);
}
