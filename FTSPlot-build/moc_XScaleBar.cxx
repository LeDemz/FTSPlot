/****************************************************************************
** Meta object code from reading C++ file 'XScaleBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../XScaleBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XScaleBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__XScaleBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   20,   19,   19, 0x0a,
      73,   68,   19,   19, 0x0a,
     102,   97,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__XScaleBar[] = {
    "FTSPlot::XScaleBar\0\0Xcursor,Xscale\0"
    "updateCoords(long double,double)\0Xmin\0"
    "setNewXmin(long double)\0Xmax\0"
    "setNewXmax(long double)\0"
};

void FTSPlot::XScaleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XScaleBar *_t = static_cast<XScaleBar *>(_o);
        switch (_id) {
        case 0: _t->updateCoords((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setNewXmin((*reinterpret_cast< long double(*)>(_a[1]))); break;
        case 2: _t->setNewXmax((*reinterpret_cast< long double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FTSPlot::XScaleBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::XScaleBar::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_FTSPlot__XScaleBar,
      qt_meta_data_FTSPlot__XScaleBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::XScaleBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::XScaleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::XScaleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__XScaleBar))
        return static_cast<void*>(const_cast< XScaleBar*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int FTSPlot::XScaleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
