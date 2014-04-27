#ifndef SFR_LIST_H
#define SFR_LIST_H

#include <QObject>
#include "sfr_object.h"

using namespace std;

class SFR_List : public QObject
{
    Q_OBJECT
public:
    explicit SFR_List(QObject *parent = 0);
    void Add(SFR_Object *sfr);
    bool PossibleToRemove (SFR_Object *sfr);

signals:

public slots:

private:
    list<SFR_Object *> sfrList;

};

#endif // SFR_LIST_H
