/****************************************************************************
** Meta object code from reading C++ file 'GL_Layer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GL_Layer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GL_Layer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__GL_Layer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      47,   18,   18,   18, 0x05,
      73,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__GL_Layer[] = {
    "FTSPlot::GL_Layer\0\0notifyListUpdate(GL_Layer*)\0"
    "triggerRepaint(GL_Layer*)\0GUIshowhide()\0"
};

void FTSPlot::GL_Layer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GL_Layer *_t = static_cast<GL_Layer *>(_o);
        switch (_id) {
        case 0: _t->notifyListUpdate((*reinterpret_cast< GL_Layer*(*)>(_a[1]))); break;
        case 1: _t->triggerRepaint((*reinterpret_cast< GL_Layer*(*)>(_a[1]))); break;
        case 2: _t->GUIshowhide(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FTSPlot::GL_Layer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::GL_Layer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FTSPlot__GL_Layer,
      qt_meta_data_FTSPlot__GL_Layer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::GL_Layer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::GL_Layer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::GL_Layer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__GL_Layer))
        return static_cast<void*>(const_cast< GL_Layer*>(this));
    return QObject::qt_metacast(_clname);
}

int FTSPlot::GL_Layer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::GL_Layer::notifyListUpdate(GL_Layer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FTSPlot::GL_Layer::triggerRepaint(GL_Layer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FTSPlot::GL_Layer::GUIshowhide()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
