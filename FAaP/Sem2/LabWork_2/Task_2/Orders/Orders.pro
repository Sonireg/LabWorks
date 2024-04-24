QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addingorderwidget.cpp \
    addingproducttoorder.cpp \
    addingproducttoorderbyname.cpp \
    listofproducts.cpp \
    main.cpp \
    order.cpp \
    orderdatechangingwidget.cpp \
    orderfindingbydate.cpp \
    orderfindingbyname.cpp \
    orderfindingbynum.cpp \
    ordernamechanging.cpp \
    ordernumchanging.cpp \
    orderproductamountchanger.cpp \
    orderprodutslistworker.cpp \
    ordersfilework.cpp \
    orderstable.cpp \
    pricelisttable.cpp \
    pricelistwork.cpp \
    product.cpp \
    productaddingwidget.cpp \
    productbynamefinder.cpp \
    productbynumfinder.cpp \
    productbypricefinder.cpp \
    productnamechangingwidget.cpp \
    productnumchangingwidget.cpp \
    productpricechangingwidget.cpp \
    productsinorderwidget.cpp

HEADERS += \
    addingorderwidget.h \
    addingproducttoorder.h \
    addingproducttoorderbyname.h \
    listofproducts.h \
    order.h \
    orderdatechangingwidget.h \
    orderfindingbydate.h \
    orderfindingbyname.h \
    orderfindingbynum.h \
    ordernamechanging.h \
    ordernumchanging.h \
    orderproductamountchanger.h \
    orderprodutslistworker.h \
    ordersfilework.h \
    orderstable.h \
    pricelisttable.h \
    pricelistwork.h \
    product.h \
    productaddingwidget.h \
    productbynamefinder.h \
    productbynumfinder.h \
    productbypricefinder.h \
    productnamechangingwidget.h \
    productnumchangingwidget.h \
    productpricechangingwidget.h \
    productsinorderwidget.h

FORMS += \
    addingorderwidget.ui \
    addingproducttoorder.ui \
    addingproducttoorderbyname.ui \
    orderdatechangingwidget.ui \
    orderfindingbydate.ui \
    orderfindingbyname.ui \
    orderfindingbynum.ui \
    ordernamechanging.ui \
    ordernumchanging.ui \
    orderproductamountchanger.ui \
    orderstable.ui \
    pricelisttable.ui \
    productaddingwidget.ui \
    productbynamefinder.ui \
    productbynumfinder.ui \
    productbypricefinder.ui \
    productnamechangingwidget.ui \
    productnumchangingwidget.ui \
    productpricechangingwidget.ui \
    productsinorderwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
