/****************************************************************************
** Meta object code from reading C++ file 'EventEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../EventEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__EventEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      99,   22,   21,   21, 0x05,
     184,  159,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     233,   21,   21,   21, 0x0a,
     249,   21,   21,   21, 0x0a,
     266,   21,   21,   21, 0x0a,
     287,   21,   21,   21, 0x0a,
     308,   21,   21,   21, 0x0a,
     321,   21,   21,   21, 0x0a,
     347,  338,   21,   21, 0x0a,
     378,   21,   21,   21, 0x0a,
     394,   21,   21,   21, 0x0a,
     410,   21,   21,   21, 0x0a,
     424,   21,   21,   21, 0x0a,
     436,   21,   21,   21, 0x0a,
     449,   21,   21,   21, 0x0a,
     472,  466,   21,   21, 0x0a,
     492,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__EventEditor[] = {
    "FTSPlot::EventEditor\0\0"
    "reqXdataBegin,reqXdataEnd,reqDispPower,baseDirName,reqYFrustMin,reqYFr"
    "ustMax\0"
    "requestDisplayList(qint64,qint64,int,QString,double,double)\0"
    "Xcursor,Xscale,Ymin,Ymax\0"
    "centerCoordsOn(long double,double,double,double)\0"
    "openEventList()\0closeEventList()\0"
    "importFlatFileSlot()\0exportFlatFileSlot()\0"
    "threadDone()\0addEventManual()\0newValue\0"
    "validateManualPosLine(QString)\0"
    "nextEventSlot()\0prevEventSlot()\0"
    "deleteEvent()\0plusEvent()\0minusEvent()\0"
    "handleFineTune()\0state\0toggleTrackBox(int)\0"
    "relayGUIupdate()\0"
};

void FTSPlot::EventEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventEditor *_t = static_cast<EventEditor *>(_o);
        switch (_id) {
        case 0: _t->requestDisplayList((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->centerCoordsOn((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 2: _t->openEventList(); break;
        case 3: _t->closeEventList(); break;
        case 4: _t->importFlatFileSlot(); break;
        case 5: _t->exportFlatFileSlot(); break;
        case 6: _t->threadDone(); break;
        case 7: _t->addEventManual(); break;
        case 8: _t->validateManualPosLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->nextEventSlot(); break;
        case 10: _t->prevEventSlot(); break;
        case 11: _t->deleteEvent(); break;
        case 12: _t->plusEvent(); break;
        case 13: _t->minusEvent(); break;
        case 14: _t->handleFineTune(); break;
        case 15: _t->toggleTrackBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->relayGUIupdate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FTSPlot::EventEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::EventEditor::staticMetaObject = {
    { &GL_Layer::staticMetaObject, qt_meta_stringdata_FTSPlot__EventEditor,
      qt_meta_data_FTSPlot__EventEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::EventEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::EventEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::EventEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__EventEditor))
        return static_cast<void*>(const_cast< EventEditor*>(this));
    return GL_Layer::qt_metacast(_clname);
}

int FTSPlot::EventEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GL_Layer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::EventEditor::requestDisplayList(qint64 _t1, qint64 _t2, int _t3, QString _t4, double _t5, double _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FTSPlot::EventEditor::centerCoordsOn(long double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
