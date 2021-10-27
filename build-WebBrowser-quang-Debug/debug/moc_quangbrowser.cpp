/****************************************************************************
** Meta object code from reading C++ file 'quangbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../WebBrowser/quangbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quangbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QuangBrowser_t {
    QByteArrayData data[8];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuangBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuangBrowser_t qt_meta_stringdata_QuangBrowser = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QuangBrowser"
QT_MOC_LITERAL(1, 13, 28), // "on_addressEdit_returnPressed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(4, 65, 24), // "on_forwardButton_clicked"
QT_MOC_LITERAL(5, 90, 21), // "on_helpButton_clicked"
QT_MOC_LITERAL(6, 112, 21), // "on_webView_urlChanged"
QT_MOC_LITERAL(7, 134, 4) // "arg1"

    },
    "QuangBrowser\0on_addressEdit_returnPressed\0"
    "\0on_backButton_clicked\0on_forwardButton_clicked\0"
    "on_helpButton_clicked\0on_webView_urlChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuangBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    7,

       0        // eod
};

void QuangBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuangBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addressEdit_returnPressed(); break;
        case 1: _t->on_backButton_clicked(); break;
        case 2: _t->on_forwardButton_clicked(); break;
        case 3: _t->on_helpButton_clicked(); break;
        case 4: _t->on_webView_urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QuangBrowser::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_QuangBrowser.data,
    qt_meta_data_QuangBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QuangBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuangBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuangBrowser.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QuangBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
