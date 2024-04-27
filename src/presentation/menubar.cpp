#include "menubar.h"
#include <QMenu>

MenuBar::MenuBar(QWidget *parent)
    : QMenuBar{parent}
{
    setupMenuBar();
}

void MenuBar::setupMenuBar()
{
    setupFileMenu();
}

void MenuBar::setupFileMenu()
{
    pFile = new QMenu(tr("&File"), this);

    addMenuAction(pFile,
                  tr("&Open"),
                  CommandCode::FileOpen,
                  QKeySequence{Qt::CTRL | Qt::Key_O});

    auto checkable = addMenuAction(pFile,
                                tr("&Check"),
                                CommandCode::None);
    checkable->setCheckable(true);


    addMenuAction(pFile,
                  tr("&Quit"),
                  CommandCode::Quit,
                  QKeySequence{Qt::ALT | Qt::Key_F4});

    addMenu(pFile);
}

QAction* MenuBar::addMenuAction(QMenu* parentMenu, const QString title,
                                const CommandCode code, const QKeySequence& keys)
{
    auto action = new QAction{title, parentMenu};
    action->setShortcut(keys);
    parentMenu->addAction(action);
    connect(action, &QAction::triggered, this,
            [this, code](const bool checked){
        emit commandTrigered(code, checked);
    });
    return action;
}
