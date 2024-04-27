#include "commandhandler.h"

#include <QApplication>
#include <QDebug>

CommandHandler::CommandHandler(QObject *parent)
    : QObject{parent}
{
    mRouting = {
        {CommandCode::FileOpen, &CommandHandler::someSlot},
        {CommandCode::Quit, [](){qApp->quit();}},
    };
}

void CommandHandler::onCommandTriggered(const CommandCode code, const bool checked)
{
    const auto None = [code, checked](){
        const auto number = qvariant_cast<int>(code);
        const auto name = QVariant::fromValue(code).toString();
        qWarning()<<"Unsuppoted code received:"<<number
                  <<"\nCode named:"<< name
                  <<"\nIts QAction was"<<(checked ? "checked" : "unchecked");
    };

    const auto& func = mRouting.value(code,  None);
    const Types idx = Types{func.index()};
    switch(idx){
    case Types::CommandHandlerMethod:
        QMetaObject::invokeMethod(this, std::get<CommandHandlerMethod>(func));
            break;
        case Types::ExternalVoidFunction:
            QMetaObject::invokeMethod(this, std::get<ExternalVoidFunction>(func));
            break;
    }
}

void CommandHandler::someSlot()
{
    qDebug()<<"open was clicked";
}
