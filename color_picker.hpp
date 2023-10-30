#ifndef CPICKER_COLOR_PICKER_HEADER
#define CPICKER_COLOR_PICKER_HEADER

#include "QWidget"
#include "color_view.hpp"


class ColorPicker : public QWidget {
   
   QImage image;
   ColorView colorView;

 protected:
   void mouseMoveEvent(QMouseEvent * event) override;
   void mousePressEvent(QMouseEvent * event) override;

 public:
   explicit ColorPicker(QWidget * parent = nullptr);
   
};


#endif
