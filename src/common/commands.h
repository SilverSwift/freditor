#ifndef COMMANDS_H
#define COMMANDS_H

#include <QObject>

class CommandCodes {
Q_GADGET
public:
    enum Codes{
        None,
        FileOpen,
        Quit
    };

    Q_ENUM(Codes);

};

using CommandCode = CommandCodes::Codes;

#endif // COMMANDS_H
