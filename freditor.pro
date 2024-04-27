QT += \
    core \
    widgets

SOURCES += \
    main.cpp \
    src/domain/commandhandler.cpp \
    src/presentation/mainwindow.cpp \
    src/presentation/menubar.cpp \
    src/toplevelcontainer.cpp \
    testqsci.cpp

INCLUDEPATH += src

DISTFILES +=

RESOURCES += \
    main.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/qsci/bin/ -lqscintilla2_qt6
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/qsci/bin/ -lqscintilla2_qt6d

INCLUDEPATH += $$PWD/qsci/include
DEPENDPATH += $$PWD/qsci/include

HEADERS += \
    src/common/commands.h \
    src/domain/commandhandler.h \
    src/presentation/mainwindow.h \
    src/presentation/menubar.h \
    src/toplevelcontainer.h \
    testqsci.h
