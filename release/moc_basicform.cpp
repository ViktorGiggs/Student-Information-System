/****************************************************************************
** Meta object code from reading C++ file 'basicform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../basicform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basicform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BasicForm_t {
    uint offsetsAndSizes[42];
    char stringdata0[10];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[29];
    char stringdata5[33];
    char stringdata6[5];
    char stringdata7[6];
    char stringdata8[12];
    char stringdata9[9];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[12];
    char stringdata13[8];
    char stringdata14[10];
    char stringdata15[6];
    char stringdata16[10];
    char stringdata17[6];
    char stringdata18[11];
    char stringdata19[7];
    char stringdata20[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BasicForm_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_BasicForm_t qt_meta_stringdata_BasicForm = {
    {
        QT_MOC_LITERAL(0, 9),  // "BasicForm"
        QT_MOC_LITERAL(10, 30),  // "on_MyProfileLinkButton_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 30),  // "on_MyCoursesLinkButton_clicked"
        QT_MOC_LITERAL(73, 28),  // "on_MyGroupLinkButton_clicked"
        QT_MOC_LITERAL(102, 32),  // "on_InformationLinkButton_clicked"
        QT_MOC_LITERAL(135, 4),  // "slot"
        QT_MOC_LITERAL(140, 5),  // "sname"
        QT_MOC_LITERAL(146, 11),  // "slotSurname"
        QT_MOC_LITERAL(158, 8),  // "ssurname"
        QT_MOC_LITERAL(167, 9),  // "slotPhoto"
        QT_MOC_LITERAL(177, 9),  // "outPixmap"
        QT_MOC_LITERAL(187, 11),  // "slotFaculty"
        QT_MOC_LITERAL(199, 7),  // "faculty"
        QT_MOC_LITERAL(207, 9),  // "slotGroup"
        QT_MOC_LITERAL(217, 5),  // "group"
        QT_MOC_LITERAL(223, 9),  // "slotScore"
        QT_MOC_LITERAL(233, 5),  // "score"
        QT_MOC_LITERAL(239, 10),  // "slotArreas"
        QT_MOC_LITERAL(250, 6),  // "arreas"
        QT_MOC_LITERAL(257, 10)   // "slotFilter"
    },
    "BasicForm",
    "on_MyProfileLinkButton_clicked",
    "",
    "on_MyCoursesLinkButton_clicked",
    "on_MyGroupLinkButton_clicked",
    "on_InformationLinkButton_clicked",
    "slot",
    "sname",
    "slotSurname",
    "ssurname",
    "slotPhoto",
    "outPixmap",
    "slotFaculty",
    "faculty",
    "slotGroup",
    "group",
    "slotScore",
    "score",
    "slotArreas",
    "arreas",
    "slotFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasicForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    1,   90,    2, 0x0a,    5 /* Public */,
       8,    1,   93,    2, 0x0a,    7 /* Public */,
      10,    1,   96,    2, 0x0a,    9 /* Public */,
      12,    1,   99,    2, 0x0a,   11 /* Public */,
      14,    1,  102,    2, 0x0a,   13 /* Public */,
      16,    1,  105,    2, 0x0a,   15 /* Public */,
      18,    1,  108,    2, 0x0a,   17 /* Public */,
      20,    1,  111,    2, 0x0a,   19 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QPixmap,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void BasicForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BasicForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_MyProfileLinkButton_clicked(); break;
        case 1: _t->on_MyCoursesLinkButton_clicked(); break;
        case 2: _t->on_MyGroupLinkButton_clicked(); break;
        case 3: _t->on_InformationLinkButton_clicked(); break;
        case 4: _t->slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->slotSurname((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->slotPhoto((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1]))); break;
        case 7: _t->slotFaculty((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->slotGroup((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->slotScore((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->slotArreas((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->slotFilter((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BasicForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BasicForm.offsetsAndSizes,
    qt_meta_data_BasicForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BasicForm_t
, QtPrivate::TypeAndForceComplete<BasicForm, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *BasicForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BasicForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BasicForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
