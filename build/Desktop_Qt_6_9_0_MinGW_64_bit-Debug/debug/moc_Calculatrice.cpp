/****************************************************************************
** Meta object code from reading C++ file 'Calculatrice.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Calculatrice.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Calculatrice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
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
struct qt_meta_tag_ZN12CalculatriceE_t {};
} // unnamed namespace

template <> constexpr inline auto Calculatrice::qt_create_metaobjectdata<qt_meta_tag_ZN12CalculatriceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Calculatrice",
        "ChiffreClicked",
        "",
        "OperateurClicked",
        "on_ButtonEgale_clicked",
        "on_ButtonVirgule_clicked",
        "on_ButtonSigne_clicked",
        "on_ButtonBack_clicked",
        "on_ButtonClearAffich_clicked",
        "on_ButtonClear_clicked",
        "on_ButtonMemSet_clicked",
        "on_ButtonMemRead_clicked",
        "on_ButtonMemPlus_clicked",
        "on_ButtonMemClear_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'ChiffreClicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OperateurClicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonEgale_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonVirgule_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonSigne_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonBack_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonClearAffich_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonClear_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonMemSet_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonMemRead_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonMemPlus_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ButtonMemClear_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Calculatrice, qt_meta_tag_ZN12CalculatriceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Calculatrice::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CalculatriceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CalculatriceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12CalculatriceE_t>.metaTypes,
    nullptr
} };

void Calculatrice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Calculatrice *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ChiffreClicked(); break;
        case 1: _t->OperateurClicked(); break;
        case 2: _t->on_ButtonEgale_clicked(); break;
        case 3: _t->on_ButtonVirgule_clicked(); break;
        case 4: _t->on_ButtonSigne_clicked(); break;
        case 5: _t->on_ButtonBack_clicked(); break;
        case 6: _t->on_ButtonClearAffich_clicked(); break;
        case 7: _t->on_ButtonClear_clicked(); break;
        case 8: _t->on_ButtonMemSet_clicked(); break;
        case 9: _t->on_ButtonMemRead_clicked(); break;
        case 10: _t->on_ButtonMemPlus_clicked(); break;
        case 11: _t->on_ButtonMemClear_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Calculatrice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculatrice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CalculatriceE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calculatrice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
