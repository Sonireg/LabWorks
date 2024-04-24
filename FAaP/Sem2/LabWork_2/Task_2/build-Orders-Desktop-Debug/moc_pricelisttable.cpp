/****************************************************************************
** Meta object code from reading C++ file 'pricelisttable.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Orders/pricelisttable.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pricelisttable.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPriceListTableENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPriceListTableENDCLASS = QtMocHelpers::stringData(
    "PriceListTable",
    "productsChanged",
    "",
    "on_sortingButton_clicked",
    "on_addingProductButton_clicked",
    "on_changingButton_clicked",
    "on_deletingButton_clicked",
    "on_findingButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPriceListTableENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[15];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[31];
    char stringdata5[26];
    char stringdata6[26];
    char stringdata7[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPriceListTableENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPriceListTableENDCLASS_t qt_meta_stringdata_CLASSPriceListTableENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "PriceListTable"
        QT_MOC_LITERAL(15, 15),  // "productsChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 24),  // "on_sortingButton_clicked"
        QT_MOC_LITERAL(57, 30),  // "on_addingProductButton_clicked"
        QT_MOC_LITERAL(88, 25),  // "on_changingButton_clicked"
        QT_MOC_LITERAL(114, 25),  // "on_deletingButton_clicked"
        QT_MOC_LITERAL(140, 24)   // "on_findingButton_clicked"
    },
    "PriceListTable",
    "productsChanged",
    "",
    "on_sortingButton_clicked",
    "on_addingProductButton_clicked",
    "on_changingButton_clicked",
    "on_deletingButton_clicked",
    "on_findingButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPriceListTableENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PriceListTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPriceListTableENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPriceListTableENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPriceListTableENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PriceListTable, std::true_type>,
        // method 'productsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sortingButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addingProductButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changingButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletingButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_findingButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PriceListTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PriceListTable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->productsChanged(); break;
        case 1: _t->on_sortingButton_clicked(); break;
        case 2: _t->on_addingProductButton_clicked(); break;
        case 3: _t->on_changingButton_clicked(); break;
        case 4: _t->on_deletingButton_clicked(); break;
        case 5: _t->on_findingButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PriceListTable::*)();
            if (_t _q_method = &PriceListTable::productsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *PriceListTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PriceListTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPriceListTableENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PriceListTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PriceListTable::productsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
