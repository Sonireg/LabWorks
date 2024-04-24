/****************************************************************************
** Meta object code from reading C++ file 'addingproducttoorderbyname.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Orders/addingproducttoorderbyname.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addingproducttoorderbyname.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS = QtMocHelpers::stringData(
    "AddingProductToOrderByName",
    "ProductAddedToOrder",
    "",
    "on_confirmButton_clicked",
    "filterItems",
    "text"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[27];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[12];
    char stringdata5[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS_t qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "AddingProductToOrderByName"
        QT_MOC_LITERAL(27, 19),  // "ProductAddedToOrder"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 24),  // "on_confirmButton_clicked"
        QT_MOC_LITERAL(73, 11),  // "filterItems"
        QT_MOC_LITERAL(85, 4)   // "text"
    },
    "AddingProductToOrderByName",
    "ProductAddedToOrder",
    "",
    "on_confirmButton_clicked",
    "filterItems",
    "text"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAddingProductToOrderByNameENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject AddingProductToOrderByName::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAddingProductToOrderByNameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AddingProductToOrderByName, std::true_type>,
        // method 'ProductAddedToOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filterItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void AddingProductToOrderByName::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddingProductToOrderByName *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ProductAddedToOrder(); break;
        case 1: _t->on_confirmButton_clicked(); break;
        case 2: _t->filterItems((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddingProductToOrderByName::*)();
            if (_t _q_method = &AddingProductToOrderByName::ProductAddedToOrder; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *AddingProductToOrderByName::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddingProductToOrderByName::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAddingProductToOrderByNameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddingProductToOrderByName::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AddingProductToOrderByName::ProductAddedToOrder()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
