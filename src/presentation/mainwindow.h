#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*!
 * \brief The MainWindow class
 *
 * Custom layout managment to be implemented here...
 *
 */
class MainWindow final : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

};

#endif // MAINWINDOW_H
