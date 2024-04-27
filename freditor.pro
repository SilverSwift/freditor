QT += \
    core \
    widgets

SOURCES += \
    main.cpp \
    testqsci.cpp

DISTFILES +=

RESOURCES += \
    main.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/qsci/bin/ -lqscintilla2_qt6
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/qsci/bin/ -lqscintilla2_qt6d

INCLUDEPATH += $$PWD/qsci/include
DEPENDPATH += $$PWD/qsci/include

HEADERS += \
    testqsci.h
