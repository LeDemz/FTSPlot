/****************************************************************************
** Meta object code from reading C++ file 'TimeSeriesPlotLoader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TimeSeriesPlotLoader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeSeriesPlotLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__TimeSeriesPlotLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__TimeSeriesPlotLoader[] = {
    "FTSPlot::TimeSeriesPlotLoader\0\0"
    "notifyListUpdate()\0"
};

void FTSPlot::TimeSeriesPlotLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TimeSeriesPlotLoader *_t = static_cast<TimeSeriesPlotLoader *>(_o);
        switch (_id) {
        case 0: _t->notifyListUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FTSPlot::TimeSeriesPlotLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::TimeSeriesPlotLoader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FTSPlot__TimeSeriesPlotLoader,
      qt_meta_data_FTSPlot__TimeSeriesPlotLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::TimeSeriesPlotLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::TimeSeriesPlotLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::TimeSeriesPlotLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__TimeSeriesPlotLoader))
        return static_cast<void*>(const_cast< TimeSeriesPlotLoader*>(this));
    return QThread::qt_metacast(_clname);
}

int FTSPlot::TimeSeriesPlotLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::TimeSeriesPlotLoader::notifyListUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
