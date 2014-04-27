#include "sfr_list.h"

SFR_List::SFR_List(QObject *parent) :
    QObject(parent)
{
}

SFR_List::Add(SFR_Object *sfr)
{
    SFR_List::sfrList.push_back(sfr);
    // TODO: Добавить проверку зависимостей и добавление отсутствующих в списке ФТБ.
}
