/****************************************************************************
** Meta object code from reading C++ file 'FTSPrepGUI.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FTSPrepGUI.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FTSPrepGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTSPlot__FTSPrepGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   20,   20,   20, 0x0a,
      52,   20,   20,   20, 0x0a,
      72,   20,   20,   20, 0x0a,
      92,   20,   20,   20, 0x0a,
     108,   20,   20,   20, 0x0a,
     162,  129,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FTSPlot__FTSPrepGUI[] = {
    "FTSPlot::FTSPrepGUI\0\0abortThread()\0"
    "addFileHandler()\0RemoveFileHandler()\0"
    "StartStopHandlder()\0ResumeHandler()\0"
    "handleThreadFinish()\0"
    "totalProgress,level,fileProgress\0"
    "handleProgressUpdate(int,int,int)\0"
};

void FTSPlot::FTSPrepGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FTSPrepGUI *_t = static_cast<FTSPrepGUI *>(_o);
        switch (_id) {
        case 0: _t->abortThread(); break;
        case 1: _t->addFileHandler(); break;
        case 2: _t->RemoveFileHandler(); break;
        case 3: _t->StartStopHandlder(); break;
        case 4: _t->ResumeHandler(); break;
        case 5: _t->handleThreadFinish(); break;
        case 6: _t->handleProgressUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FTSPlot::FTSPrepGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTSPlot::FTSPrepGUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FTSPlot__FTSPrepGUI,
      qt_meta_data_FTSPlot__FTSPrepGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTSPlot::FTSPrepGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTSPlot::FTSPrepGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTSPlot::FTSPrepGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTSPlot__FTSPrepGUI))
        return static_cast<void*>(const_cast< FTSPrepGUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int FTSPlot::FTSPrepGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FTSPlot::FTSPrepGUI::abortThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
