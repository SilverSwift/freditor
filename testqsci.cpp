#include "testqsci.h"

#include <Qsci/qsciscintilla.h>

TestQsci::TestQsci(QWidget *parent)
    : QMainWindow{parent}
{
    auto text = new QsciScintilla(this);
    setCentralWidget(text);
}
