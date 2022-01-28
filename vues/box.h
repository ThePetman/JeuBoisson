#ifndef BOX_H
#define BOX_H

#include <QObject>
#include <QComboBox>

  class Box : public QComboBox
{
    Q_OBJECT
    public:
    explicit Box(QWidget *parent = nullptr);



};

#endif // BOX_H
