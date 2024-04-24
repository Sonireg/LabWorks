#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDesktopServices>
#include "date.h"
#include <QLineEdit>
#include <QLabel>
#include <QLayout>
#include <QMessageBox>
#include <QDateEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ReadDates_clicked();

    void on_confirmChanging_clicked();

    void on_confirmAdding_clicked();

    void on_confirmBirthday_clicked();

    void on_AddDate_2_clicked();

    void on_EnterDirthday_2_clicked();

    void on_ChangeDate_2_clicked();

    void on_OpenFileButton_2_clicked();

private:
    QWidget* changeDateWidget;
    QDateEdit* enterChangedDate;

    QWidget* addDateWidget;
    QDateEdit* enterNewDate;

    QWidget* birthdayWidget;
    QDateEdit* enterBirthdayDate;

    QMessageBox* wrongInputLabel;

    QString filePath;
    Date birthday;
    Date* datesfromfile;
    int amountOfLines;

    void fillTable();
    void openFile();
    void appendToFile(Date);
    void modifyFile(int, Date);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
