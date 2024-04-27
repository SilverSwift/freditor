#ifndef TESTQSCI_H
#define TESTQSCI_H

#include <QMainWindow>

class TestQsci : public QMainWindow
{
    Q_OBJECT
public:
    explicit TestQsci(QWidget *parent = nullptr);
    QSize sizeHint() const override {return QSize(400, 200);}

signals:

};

#endif // TESTQSCI_H
