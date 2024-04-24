#ifndef ORDERFINDINGBYNAME_H
#define ORDERFINDINGBYNAME_H

#include <QWidget>
#include <QMessageBox>
#include "ordersfilework.h"
#include <QKeyEvent>
#include <QListWidget>

namespace Ui {
class OrderFindingByName;
}

class OrderFindingByName : public QWidget
{
    Q_OBJECT

public:
    explicit OrderFindingByName(QWidget *parent = nullptr);
    ~OrderFindingByName();

    int getFoundNum() const;
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void showEvent(QShowEvent *event) override;
private slots:
    void on_pushButton_clicked();
    void filterItems(const QString &text);
signals:
    void ordFound();
private:
    Ui::OrderFindingByName *ui;
    OrdersFileWork finder;
    QMessageBox* message;
    int foundNum;
    QListWidget *itemList;
    QStringList productsName;
};

#endif // ORDERFINDINGBYNAME_H
