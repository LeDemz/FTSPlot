/****************************************************************************
** Meta object code from reading C++ file 'SimpleViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SimpleViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimpleViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__SimpleViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      43,   27,   26,   26, 0x05,
      73,   26,   26,   26, 0x05,
     117,   92,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     161,   26,   26,   26, 0x0a,
     177,   26,   26,   26, 0x0a,
     194,   26,   26,   26, 0x0a,
     221,  214,   26,   26, 0x0a,
     254,  250,   26,   26, 0x0a,
     280,   92,   26,   26, 0x0a,
     327,   92,   26,   26, 0x0a,
     383,  373,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__SimpleViewWidget[] = {
    "FTSPlot::SimpleViewWidget\0\0message,timeout\0"
    "writeCrossCoords(QString,int)\0"
    "clearCrossCoords()\0Xcursor,Xscale,Ymin,Ymax\0"
    "newCoords(long double,double,double,double)\0"
    "addTimeSeries()\0addEventEditor()\0"
    "addIntervalEditor()\0module\0"
    "registerCompleted(GL_Layer*)\0mod\0"
    "ExtLayerUpdate(GL_Layer*)\0"
    "updateCoords(long double,double,double,double)\0"
    "displaySpot(long double,double,double,double)\0"
    "begin,end\0displayRange(long double,long double)\0"
};

void FTSPlot::SimpleViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimpleViewWidget *_t = static_cast<SimpleViewWidget *>(_o);
        switch (_id) {
        case 0: _t->writeCrossCoords((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->clearCrossCoords(); break;
        case 2: _t->newCoords((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 3: _t->addTimeSeries(); break;
        case 4: _t->addEventEditor(); break;
        case 5: _t->addIntervalEditor(); break;
        case 6: _t->registerCompleted((*reinterpret_cast< GL_Layer*(*)>(_a[1]))); break;
        case 7: _t->ExtLayerUpdate((*reinterpret_cast< GL_Layer*(*)>(_a[1]))); break;
        case 8: _t->updateCoords((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 9: _t->displaySpot((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 10: _t->displayRange((*reinterpret_cast< long double(*)>(_a[1])),(*reinterpret_cast< long double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FTSPlot::SimpleViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::SimpleViewWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_FTSPlot__SimpleViewWidget,
      qt_meta_data_FTSPlot__SimpleViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::SimpleViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::SimpleViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::SimpleViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__SimpleViewWidget))
        return static_cast<void*>(const_cast< SimpleViewWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int FTSPlot::SimpleViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::SimpleViewWidget::writeCrossCoords(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FTSPlot::SimpleViewWidget::clearCrossCoords()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FTSPlot::SimpleViewWidget::newCoords(long double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
