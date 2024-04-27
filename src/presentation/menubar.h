#ifndef MENUBAR_H
#define MENUBAR_H

#include <QMenuBar>

#include "common/commands.h"

class QMenu;

class MenuBar final : public QMenuBar
{
    Q_OBJECT
public:
    explicit MenuBar(QWidget *parent = nullptr);


signals:
    void commandTrigered(CommandCode, bool);

private:
    void setupMenuBar();
    void setupFileMenu();

    /*!
     * \brief addMenuAction
     * \param menu QMenu to add action with parameters listed below
     * \param title QString text label for action
     * \param keys QKeySequence associated with the action
     * \param code CommandCode associated with the action
     * \return a pointer to action added to a menu
     *
     * Creates new action and adds it to a menu.
     * Menu takes ownership of the action.
     * QAction::triggered signal is being boud to commandTrigger.
     */
    QAction* addMenuAction(QMenu* parentMenu, const QString title,
                           const CommandCode code, const QKeySequence& keys = QKeySequence{});

    QMenu* pFile = nullptr;
//    that's the list of menus in Notepad++
//    at the moment just for reference
//    QMenu* pEdit = nullptr;
//    QMenu* pSearch = nullptr;
//    QMenu* pView = nullptr;
//    QMenu* pEncodings = nullptr;
//    QMenu* pSyntaxes = nullptr;
//    QMenu* pOptions = nullptr;
//    QMenu* pTools = nullptr;
//    QMenu* pMacros = nullptr;
//    QMenu* pLaunch = nullptr;
//    QMenu* pPlugins = nullptr;
//    QMenu* pTabs = nullptr;
    QMenu* pHelp = nullptr;

};

#endif // MENUBAR_H
