/****************************************************************************
** Meta object code from reading C++ file 'orderstable.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Orders/orderstable.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'orderstable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOrdersTableENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSOrdersTableENDCLASS = QtMocHelpers::stringData(
    "OrdersTable",
    "ordersChanged",
    "",
    "openOrderProductsList",
    "numOfLineInTable",
    "on_sortOrdersButton_clicked",
    "on_addingOrderButton_clicked",
    "on_openPriceListButton_clicked",
    "on_deletingBtton_clicked",
    "on_changeOrderButton_clicked",
    "on_searchButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOrdersTableENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[17];
    char stringdata5[28];
    char stringdata6[29];
    char stringdata7[31];
    char stringdata8[25];
    char stringdata9[29];
    char stringdata10[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOrdersTableENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOrdersTableENDCLASS_t qt_meta_stringdata_CLASSOrdersTableENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "OrdersTable"
        QT_MOC_LITERAL(12, 13),  // "ordersChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 21),  // "openOrderProductsList"
        QT_MOC_LITERAL(49, 16),  // "numOfLineInTable"
        QT_MOC_LITERAL(66, 27),  // "on_sortOrdersButton_clicked"
        QT_MOC_LITERAL(94, 28),  // "on_addingOrderButton_clicked"
        QT_MOC_LITERAL(123, 30),  // "on_openPriceListButton_clicked"
        QT_MOC_LITERAL(154, 24),  // "on_deletingBtton_clicked"
        QT_MOC_LITERAL(179, 28),  // "on_changeOrderButton_clicked"
        QT_MOC_LITERAL(208, 23)   // "on_searchButton_clicked"
    },
    "OrdersTable",
    "ordersChanged",
    "",
    "openOrderProductsList",
    "numOfLineInTable",
    "on_sortOrdersButton_clicked",
    "on_addingOrderButton_clicked",
    "on_openPriceListButton_clicked",
    "on_deletingBtton_clicked",
    "on_changeOrderButton_clicked",
    "on_searchButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOrdersTableENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   63,    2, 0x08,    2 /* Private */,
       5,    0,   66,    2, 0x08,    4 /* Private */,
       6,    0,   67,    2, 0x08,    5 /* Private */,
       7,    0,   68,    2, 0x08,    6 /* Private */,
       8,    0,   69,    2, 0x08,    7 /* Private */,
       9,    0,   70,    2, 0x08,    8 /* Private */,
      10,    0,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OrdersTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOrdersTableENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOrdersTableENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOrdersTableENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OrdersTable, std::true_type>,
        // method 'ordersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openOrderProductsList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sortOrdersButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addingOrderButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_openPriceListButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletingBtton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changeOrderButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OrdersTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrdersTable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ordersChanged(); break;
        case 1: _t->openOrderProductsList((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_sortOrdersButton_clicked(); break;
        case 3: _t->on_addingOrderButton_clicked(); break;
        case 4: _t->on_openPriceListButton_clicked(); break;
        case 5: _t->on_deletingBtton_clicked(); break;
        case 6: _t->on_changeOrderButton_clicked(); break;
        case 7: _t->on_searchButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrdersTable::*)();
            if (_t _q_method = &OrdersTable::ordersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OrdersTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrdersTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOrdersTableENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OrdersTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OrdersTable::ordersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
