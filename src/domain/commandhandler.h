#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#include <QObject>
#include <QHash>
#include "common/commands.h"

/*!
 * \brief The CommandHandler class routes actions of entire application
 *
 */
class CommandHandler final : public QObject
{
    Q_OBJECT
public:
    explicit CommandHandler(QObject *parent = nullptr);

public slots:
    void onCommandTriggered(const CommandCode code, const bool checked);

protected:
    //----------------------------------------------------
    //this one just to check the code... should be removed
    void someSlot();
    //----------------------------------------------------

private:
    using CommandHandlerMethod = void (CommandHandler:: *)();
    using ExternalVoidFunction = std::function<void()>;

    enum class Types : size_t {CommandHandlerMethod, ExternalVoidFunction};

    using Callable = std::variant<CommandHandlerMethod, ExternalVoidFunction>;

    QHash<CommandCode, Callable> mRouting;


};

#endif // COMMANDHANDLER_H
