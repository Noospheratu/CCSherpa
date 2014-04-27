#ifndef SFR_OBJECT_H
#define SFR_OBJECT_H

#include <QObject>

class SFR_Object : public QObject
{
    Q_OBJECT
public:
    explicit SFR_Object(QObject *parent = 0);

signals:

public slots:

};

#endif // SFR_OBJECT_H
