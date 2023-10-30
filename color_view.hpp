#ifndef CPICKER_COLOR_VIEW
#define CPICKER_COLOR_VIEW

#include "QWidget"

class ColorView : public QWidget {

   QColor color;
   QPalette palette;

 public:
    void init(QSize size, QColor col, QWidget * parent = nullptr);
    void setColor(QColor col);

};


#endif
