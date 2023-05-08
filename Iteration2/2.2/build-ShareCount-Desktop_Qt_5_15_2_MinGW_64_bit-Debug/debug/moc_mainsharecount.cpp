/****************************************************************************
** Meta object code from reading C++ file 'mainsharecount.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ShareCount/mainsharecount.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainsharecount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainShareCount_t {
    QByteArrayData data[13];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainShareCount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainShareCount_t qt_meta_stringdata_MainShareCount = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MainShareCount"
QT_MOC_LITERAL(1, 15, 16), // "cleanInscription"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "cleanConnexion"
QT_MOC_LITERAL(4, 48, 25), // "on_InscriptionAcc_clicked"
QT_MOC_LITERAL(5, 74, 23), // "on_ConnexionAcc_clicked"
QT_MOC_LITERAL(6, 98, 18), // "on_Inscrit_clicked"
QT_MOC_LITERAL(7, 117, 20), // "on_Connexion_clicked"
QT_MOC_LITERAL(8, 138, 21), // "on_returnInsc_clicked"
QT_MOC_LITERAL(9, 160, 19), // "on_returnCo_clicked"
QT_MOC_LITERAL(10, 180, 19), // "on_cleanIns_clicked"
QT_MOC_LITERAL(11, 200, 18), // "on_cleanCo_clicked"
QT_MOC_LITERAL(12, 219, 22) // "on_deconnexion_clicked"

    },
    "MainShareCount\0cleanInscription\0\0"
    "cleanConnexion\0on_InscriptionAcc_clicked\0"
    "on_ConnexionAcc_clicked\0on_Inscrit_clicked\0"
    "on_Connexion_clicked\0on_returnInsc_clicked\0"
    "on_returnCo_clicked\0on_cleanIns_clicked\0"
    "on_cleanCo_clicked\0on_deconnexion_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainShareCount[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainShareCount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainShareCount *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanInscription(); break;
        case 1: _t->cleanConnexion(); break;
        case 2: _t->on_InscriptionAcc_clicked(); break;
        case 3: _t->on_ConnexionAcc_clicked(); break;
        case 4: _t->on_Inscrit_clicked(); break;
        case 5: _t->on_Connexion_clicked(); break;
        case 6: _t->on_returnInsc_clicked(); break;
        case 7: _t->on_returnCo_clicked(); break;
        case 8: _t->on_cleanIns_clicked(); break;
        case 9: _t->on_cleanCo_clicked(); break;
        case 10: _t->on_deconnexion_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainShareCount::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainShareCount.data,
    qt_meta_data_MainShareCount,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainShareCount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainShareCount::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainShareCount.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainShareCount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
