/****************************************************************************
** Meta object code from reading C++ file 'IntervalEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../IntervalEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IntervalEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__IntervalEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      98,   25,   24,   24, 0x05,
     183,  158,   24,   24, 0x05,
     236,  226,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     267,   24,   24,   24, 0x0a,
     286,   24,   24,   24, 0x0a,
     306,   24,   24,   24, 0x0a,
     327,   24,   24,   24, 0x0a,
     348,   24,   24,   24, 0x0a,
     361,   24,   24,   24, 0x0a,
     380,   24,   24,   24, 0x0a,
     399,   24,   24,   24, 0x0a,
     419,   24,   24,   24, 0x0a,
     439,   24,   24,   24, 0x0a,
     460,   24,   24,   24, 0x0a,
     480,   24,   24,   24, 0x0a,
     500,   24,   24,   24, 0x0a,
     519,   24,   24,   24, 0x0a,
     539,   24,   24,   24, 0x0a,
     558,   24,   24,   24, 0x0a,
     581,   24,   24,   24, 0x0a,
     603,   24,   24,   24, 0x0a,
     623,   24,   24,   24, 0x0a,
     650,  644,   24,   24, 0x0a,
     670,  644,   24,   24, 0x0a,
     688,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__IntervalEditor[] = {
    "FTSPlot::IntervalEditor\0\0"
    "reqXdataBegin,reqXdataEnd,reqDispPower,treeDir,reqYFrustMin,reqYFrustM"
    "ax\0"
    "requestDisplayList(qint64,qint64,int,QString,double,double)\0"
    "Xcursor,Xscale,Ymin,Ymax\0"
    "centerOn(long double,double,double,double)\0"
    "begin,end\0fitOn(long double,long double)\0"
    "openIntervalList()\0closeIntervalList()\0"
    "importFlatFileSlot()\0exportFlatFileSlot()\0"
    "threadDone()\0nextIntervalSlot()\0"
    "prevIntervalSlot()\0manualAddInterval()\0"
    "validateManualLow()\0validateManualHigh()\0"
    "manualDelInterval()\0lowerMinusHandler()\0"
    "lowerPlusHandler()\0upperMinusHandler()\0"
    "upperPlusHandler()\0validateFineTuneHigh()\0"
    "validateFineTuneLow()\0handleFineTuneLow()\0"
    "handleFineTuneHigh()\0state\0"
    "toggleTrackBox(int)\0toggleFitBox(int)\0"
    "relayGUIupdate()\0"
};

void FTSPlot::IntervalEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IntervalEditor *_t = static_cast<IntervalEditor *>(_o);
        switch (_id) {
        case 0: _t->requestDisplayList((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->centerOn((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 2: _t->fitOn((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< long double(*)>(_a[2]))); break;
        case 3: _t->openIntervalList(); break;
        case 4: _t->closeIntervalList(); break;
        case 5: _t->importFlatFileSlot(); break;
        case 6: _t->exportFlatFileSlot(); break;
        case 7: _t->threadDone(); break;
        case 8: _t->nextIntervalSlot(); break;
        case 9: _t->prevIntervalSlot(); break;
        case 10: _t->manualAddInterval(); break;
        case 11: _t->validateManualLow(); break;
        case 12: _t->validateManualHigh(); break;
        case 13: _t->manualDelInterval(); break;
        case 14: _t->lowerMinusHandler(); break;
        case 15: _t->lowerPlusHandler(); break;
        case 16: _t->upperMinusHandler(); break;
        case 17: _t->upperPlusHandler(); break;
        case 18: _t->validateFineTuneHigh(); break;
        case 19: _t->validateFineTuneLow(); break;
        case 20: _t->handleFineTuneLow(); break;
        case 21: _t->handleFineTuneHigh(); break;
        case 22: _t->toggleTrackBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->toggleFitBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->relayGUIupdate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FTSPlot::IntervalEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::IntervalEditor::staticMetaObject = {
    { &GL_Layer::staticMetaObject, qt_meta_stringdata_FTSPlot__IntervalEditor,
      qt_meta_data_FTSPlot__IntervalEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::IntervalEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::IntervalEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::IntervalEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__IntervalEditor))
        return static_cast<void*>(const_cast< IntervalEditor*>(this));
    return GL_Layer::qt_metacast(_clname);
}

int FTSPlot::IntervalEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GL_Layer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::IntervalEditor::requestDisplayList(qint64 _t1, qint64 _t2, int _t3, QString _t4, double _t5, double _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FTSPlot::IntervalEditor::centerOn(long double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FTSPlot::IntervalEditor::fitOn(long double _t1, long double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
