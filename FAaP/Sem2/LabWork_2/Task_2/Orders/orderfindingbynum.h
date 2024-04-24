#ifndef ORDERFINDINGBYNUM_H
#define ORDERFINDINGBYNUM_H

#include <QWidget>
#include <QMessageBox>
#include "ordersfilework.h"
#include <QKeyEvent>

namespace Ui {
class OrderFindingByNum;
}

class OrderFindingByNum : public QWidget
{
    Q_OBJECT

public:
    explicit OrderFindingByNum(QWidget *parent = nullptr);
    ~OrderFindingByNum();

    int getFoundNum() const;
protected:
    void keyPressEvent(QKeyEvent *event) override;
private slots:
    void on_pushButton_clicked();
signals:
    void ordFound();
private:
    Ui::OrderFindingByNum *ui;
    OrdersFileWork finder;
    QMessageBox* message;
    int foundNum;
};
#endif // ORDERFINDINGBYNUM_H
