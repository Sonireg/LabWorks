#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    filePath = "/home/denis/Qtprojects/LABA2/Task1/Dates2/dates.txt";
    ui->DatesTable->setRowCount(1);
    ui->DatesTable->setColumnCount(9);
    this->setWindowTitle("Даты");

    changeDateWidget = new QWidget();
    changeDateWidget->setFixedSize(400, 150);
    changeDateWidget->setWindowTitle("Изменение даты");
    enterChangedDate = new QDateEdit();
    QPushButton* confirmChanging = new QPushButton("Подтвердить");
    QGridLayout* confirmLayout = new QGridLayout(changeDateWidget);
    confirmLayout->addWidget(enterChangedDate, 0, 0);
    confirmLayout->addWidget(confirmChanging);
    connect(confirmChanging, &QPushButton::clicked, this, &MainWindow::on_confirmChanging_clicked);

    addDateWidget = new QWidget();
    addDateWidget->setFixedSize(300, 150);
    addDateWidget->setWindowTitle("Добавление даты");
    enterNewDate = new QDateEdit();
    QPushButton* confirmNewDate = new QPushButton("Подтвердить");
    QVBoxLayout* addingLayout = new QVBoxLayout(addDateWidget);
    addingLayout->addWidget(enterNewDate);
    addingLayout->addWidget(confirmNewDate);
    connect(confirmNewDate, &QPushButton::clicked, this, &MainWindow::on_confirmAdding_clicked);

    birthdayWidget = new QWidget();
    birthdayWidget->setFixedSize(300, 150);
    birthdayWidget->setWindowTitle("День рождения");
    enterBirthdayDate = new QDateEdit();
    QPushButton* confirmBirthday = new QPushButton("Подтвердить");
    QVBoxLayout* birthdayLayout = new QVBoxLayout(birthdayWidget);
    birthdayLayout->addWidget(enterBirthdayDate);
    birthdayLayout->addWidget(confirmBirthday);
    connect(confirmBirthday, &QPushButton::clicked, this, &MainWindow::on_confirmBirthday_clicked);

    wrongInputLabel = new QMessageBox();

    datesfromfile = new Date[1];

    ui->DatesTable->setFixedWidth(1262);
    ui->DatesTable->verticalHeader()->setVisible(false);
    ui->DatesTable->horizontalHeader()->setVisible(false);
    ui->DatesTable->setColumnWidth(0, 30);
    ui->DatesTable->setColumnWidth(1, 150);
    ui->DatesTable->setColumnWidth(2, 150);
    ui->DatesTable->setColumnWidth(3, 150);
    ui->DatesTable->setColumnWidth(4, 150);
    ui->DatesTable->setColumnWidth(5, 150);
    ui->DatesTable->setColumnWidth(6, 150);
    ui->DatesTable->setColumnWidth(7, 150);
    ui->DatesTable->setColumnWidth(8, 150);
    ui->DatesTable->setRowHeight(0, 50);
    ui->DatesTable->setItem(0, 0, new QTableWidgetItem("Номер"));
    ui->DatesTable->setItem(0, 1, new QTableWidgetItem("Дата"));
    ui->DatesTable->setItem(0, 2, new QTableWidgetItem("Дней от\\до\nсегодня"));
    ui->DatesTable->setItem(0, 3, new QTableWidgetItem("Год\nвисокосный"));
    ui->DatesTable->setItem(0, 4, new QTableWidgetItem("Следующий\nдень"));
    ui->DatesTable->setItem(0, 5, new QTableWidgetItem("Предыдущий\nдень"));
    ui->DatesTable->setItem(0, 6, new QTableWidgetItem("До ближайшего др"));
    ui->DatesTable->setItem(0, 7, new QTableWidgetItem("Номер\nнедели"));
    ui->DatesTable->setItem(0, 8, new QTableWidgetItem("До следующей\nдаты"));
    ui->DatesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->DatesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->DatesTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->DatesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    this->setFixedSize(this->size());

    birthday = Date("05.04.2006");
    ui->BirthdayLabel->setText("День рождения: " + birthday.tostr());

    amountOfLines = 0;

    on_ReadDates_clicked();
    fillTable();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete changeDateWidget;
    delete addDateWidget;
    delete birthdayWidget;
    delete wrongInputLabel;
}

void MainWindow::openFile()
{
    QString openedFilePath = QFileDialog::getOpenFileName(nullptr, "Выберите .txt файл", QDir::homePath(), "Текстовые файлы (*.txt)");

    if (!openedFilePath.isEmpty())
    {
        filePath = openedFilePath;
        QDesktopServices::openUrl(QUrl::fromLocalFile(openedFilePath));
    } else
    {
        qDebug() << "Отменено пользователем";
    }
}

void MainWindow::appendToFile(Date data)
{
    QFile file(filePath);

    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&file);
        out << data.tostr() << "\n";
        file.close();
        qDebug() << "Запись успешно добавлена в файл:" << filePath;
    } else
    {
        wrongInputLabel->hide();
        wrongInputLabel->setText("Не удалось открыть файл");
        wrongInputLabel->show();
    }
}

void MainWindow::modifyFile(int lineNumber, Date newDate)
{
    QString newLine = newDate.tostr();
    QFile file(filePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        wrongInputLabel->hide();
        wrongInputLabel->setText("Не удалось открыть файл");
        wrongInputLabel->show();
        return;
    }
    QTextStream in(&file);
    for (int i = 1; i < lineNumber; ++i)
    {
        in.readLine();
        if (in.atEnd())
        {
            wrongInputLabel->hide();
            wrongInputLabel->setText("Нет такой строки!");
            wrongInputLabel->show();
            return;
        }
    }
    qint64 position = in.pos();
    in.seek(position);
    in << newLine + "\n";
    file.close();
}


void MainWindow::on_ReadDates_clicked()
{
    QFile file(filePath);
    amountOfLines = 0;
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        wrongInputLabel->hide();
        wrongInputLabel->setText("Не удалось открыть файл");
        wrongInputLabel->show();
        return;
    }
    while(!file.atEnd())
    {
        file.readLine();
        ++amountOfLines;
    }
    file.seek(0);
    delete[] datesfromfile;
    datesfromfile = new Date[amountOfLines];
    for (int i = 0; i < amountOfLines; ++i)
    {
        datesfromfile[i] = Date(file.readLine());
        if (!datesfromfile[i].isValid())
        {
            wrongInputLabel->hide();
            wrongInputLabel->setText("В файле содержаться даты в некорректном формате");
            wrongInputLabel->show();
            return;
        }
    }
    fillTable();
    file.close();
}

void MainWindow::on_confirmChanging_clicked()
{
    Date newdate = Date();
    newdate = newdate.StringInDate(enterChangedDate->text());
    if (!newdate.isValid())
    {
        wrongInputLabel->hide();
        wrongInputLabel->setText("Введите корректную дату в формате дд.мм.гггг");
        wrongInputLabel->show();
        return;
    }
    modifyFile(ui->DatesTable->currentRow(), newdate);
    changeDateWidget->hide();
    on_ReadDates_clicked();
    fillTable();
}

void MainWindow::on_confirmAdding_clicked()
{
    Date newdate = Date();
    newdate = newdate.StringInDate(enterNewDate->text());
    if (!newdate.isValid())
    {
        wrongInputLabel->hide();
        wrongInputLabel->setText("Введите корректную дату в формате дд.мм.гггг");
        wrongInputLabel->show();
        return;
    }
    appendToFile(newdate);
    addDateWidget->hide();
    on_ReadDates_clicked();
    fillTable();
}

void MainWindow::on_confirmBirthday_clicked()
{
    Date newdate = Date();
    newdate = newdate.StringInDate(enterBirthdayDate->text());
    if (!newdate.isValid())
    {
        wrongInputLabel->hide();
        wrongInputLabel->setText("Введите корректную дату в формате дд.мм.гггг");
        wrongInputLabel->show();
        return;
    }
    birthday = newdate;
    ui->BirthdayLabel->setText("День рождения: " + birthday.tostr());
    birthdayWidget->hide();
    on_ReadDates_clicked();
    fillTable();
}

void MainWindow::fillTable()
{
    ui->DatesTable->setRowCount(amountOfLines + 1);
    for(int i = 1; i <= amountOfLines; ++i)
    {
        ui->DatesTable->setItem(i, 0, new QTableWidgetItem(QString::number(i)));
        ui->DatesTable->setItem(i, 1, new QTableWidgetItem(datesfromfile[i - 1].tostr()));
    }
    for (int i = 1; i <= amountOfLines; ++i)
    {
        Date currdate = Date(ui->DatesTable->item(i, 1)->text());
        Date nextdate = Date(ui->DatesTable->item((i + 1) % amountOfLines, 1)->text());
        ui->DatesTable->setItem(i, 8, new QTableWidgetItem(QString::number(
                                          currdate.Duration(nextdate))));
    }
    for (int i = 1; i <= amountOfLines; ++i)
    {
        ui->DatesTable->setItem(i, 2, new QTableWidgetItem(QString::number(
                                          Date(ui->DatesTable->item(i, 1)->text()).Duration(Date(QDate::currentDate())))));
    }
    for (int i = 1; i <= amountOfLines; ++i)
    {
        ui->DatesTable->setItem(i, 3, new QTableWidgetItem(
                                          Date(ui->DatesTable->item(i, 1)->text()).IsLeap() ? "Да" : "Нет"));
    }
    for (int i = 1; i <= amountOfLines; ++i)
    {
        ui->DatesTable->setItem(i, 4, new QTableWidgetItem(
                                          Date(ui->DatesTable->item(i, 1)->text()).NextDay().tostr()));
    }
    for (int i = 1; i <= amountOfLines; ++i)
    {
        ui->DatesTable->setItem(i, 5, new QTableWidgetItem(
                                          Date(ui->DatesTable->item(i, 1)->text()).PreviousDay().tostr()));
    }
    for (int i = 1; i <= amountOfLines; ++i)
    {
        int daystillbirthday = Date(ui->DatesTable->item(i, 1)->text()).DaysTillYourBithday(birthday);
        ui->DatesTable->setItem(i, 6, new QTableWidgetItem(
                                          daystillbirthday == -1 ? "РАНОВАТО!" : QString::number(daystillbirthday)));
    }
    for (int i = 1; i <= amountOfLines; ++i)
    {
        ui->DatesTable->setItem(i, 7, new QTableWidgetItem(QString::number(
                                          Date(ui->DatesTable->item(i, 1)->text()).WeekNumber())));
    }
}

void MainWindow::on_AddDate_2_clicked()
{
    addDateWidget->hide();
    addDateWidget->show();
}


void MainWindow::on_EnterDirthday_2_clicked()
{
    birthdayWidget->hide();
    birthdayWidget->show();
}


void MainWindow::on_ChangeDate_2_clicked()
{
    if (ui->DatesTable->currentRow() <= 0) {
        wrongInputLabel->hide();
        wrongInputLabel->setText("Выберите дату");
        wrongInputLabel->show();
        return;
    }
    enterChangedDate->setDate(QDate::fromString(ui->DatesTable->item(ui->DatesTable->currentRow(), 1)->text(), "dd.MM.yyyy"));
    changeDateWidget->hide();
    changeDateWidget->show();
}


void MainWindow::on_OpenFileButton_2_clicked()
{
    openFile();
}

