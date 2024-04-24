#ifndef ORDERFINDINGBYDATE_H
#define ORDERFINDINGBYDATE_H

#include <QWidget>
#include <QMessageBox>
#include "ordersfilework.h"
#include <QKeyEvent>

namespace Ui {
class OrderFindingByDate;
}

class OrderFindingByDate : public QWidget
{
    Q_OBJECT

public:
    explicit OrderFindingByDate(QWidget *parent = nullptr);
    ~OrderFindingByDate();

    int getFoundNum() const;
protected:
    void keyPressEvent(QKeyEvent *event) override;
private slots:
    void on_pushButton_clicked();
signals:
    void ordFound();
private:
    Ui::OrderFindingByDate *ui;
    OrdersFileWork finder;
    QMessageBox* message;
    int foundNum;
};

#endif // ORDERFINDINGBYDATE_H
