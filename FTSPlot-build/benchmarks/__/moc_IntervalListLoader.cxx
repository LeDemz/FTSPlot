/****************************************************************************
** Meta object code from reading C++ file 'IntervalListLoader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../IntervalListLoader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IntervalListLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__IntervalListLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      56,   48,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     143,   82,   28,   28, 0x0a,
     199,   48,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__IntervalListLoader[] = {
    "FTSPlot::IntervalListLoader\0\0"
    "notifyListUpdate()\0counter\0"
    "checkEventLoopSignal(int)\0"
    "reqXdataBegin,reqXdataEnd,reqDispPower,treeDirName,ymin,ymax\0"
    "genDisplayList(qint64,qint64,int,QString,double,double)\0"
    "checkEventLoop(int)\0"
};

void FTSPlot::IntervalListLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IntervalListLoader *_t = static_cast<IntervalListLoader *>(_o);
        switch (_id) {
        case 0: _t->notifyListUpdate(); break;
        case 1: _t->checkEventLoopSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->genDisplayList((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 3: _t->checkEventLoop((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FTSPlot::IntervalListLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::IntervalListLoader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FTSPlot__IntervalListLoader,
      qt_meta_data_FTSPlot__IntervalListLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::IntervalListLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::IntervalListLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::IntervalListLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__IntervalListLoader))
        return static_cast<void*>(const_cast< IntervalListLoader*>(this));
    return QThread::qt_metacast(_clname);
}

int FTSPlot::IntervalListLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::IntervalListLoader::notifyListUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FTSPlot::IntervalListLoader::checkEventLoopSignal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE