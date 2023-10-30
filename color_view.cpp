#include "color_view.hpp"


void ColorView::init(QSize size, QColor col, QWidget * parent) 
{
   setParent(parent);

   setColor(col);
   resize(size);
}


void ColorView::setColor(QColor col)
{
   color = col;
   palette.setColor(QPalette::Window, col);
   setPalette(palette);
}
