#ifndef TOPLEVELCONTAINER_H
#define TOPLEVELCONTAINER_H

#include <QObject>
#include <QMainWindow>
#include <QScopedPointer>

class CommandHandler;

class TopLevelContainer final : public QObject
{
    Q_OBJECT
public:
    explicit TopLevelContainer(QObject *parent = nullptr);
    void show();

private:
    void setupMenuBar();
    QScopedPointer<QMainWindow> mWindow;
    CommandHandler* pHandler = nullptr;
};

#endif // TOPLEVELCONTAINER_H
