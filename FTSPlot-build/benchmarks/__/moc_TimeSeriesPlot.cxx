/****************************************************************************
** Meta object code from reading C++ file 'TimeSeriesPlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TimeSeriesPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeSeriesPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__TimeSeriesPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__TimeSeriesPlot[] = {
    "FTSPlot::TimeSeriesPlot\0\0triggerRepaint()\0"
    "receiceListUpdate()\0"
};

void FTSPlot::TimeSeriesPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TimeSeriesPlot *_t = static_cast<TimeSeriesPlot *>(_o);
        switch (_id) {
        case 0: _t->triggerRepaint(); break;
        case 1: _t->receiceListUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FTSPlot::TimeSeriesPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::TimeSeriesPlot::staticMetaObject = {
    { &GL_Layer::staticMetaObject, qt_meta_stringdata_FTSPlot__TimeSeriesPlot,
      qt_meta_data_FTSPlot__TimeSeriesPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::TimeSeriesPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::TimeSeriesPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::TimeSeriesPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__TimeSeriesPlot))
        return static_cast<void*>(const_cast< TimeSeriesPlot*>(this));
    return GL_Layer::qt_metacast(_clname);
}

int FTSPlot::TimeSeriesPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GL_Layer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::TimeSeriesPlot::triggerRepaint()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
