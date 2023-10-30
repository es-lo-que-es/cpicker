#include "color_picker.hpp"
#include "QGuiApplication"
#include "QScreen"
#include "QClipboard"
#include "QApplication"
#include <stdio.h>


QPoint add_offset(QPoint point)
{
   return { point.x() + 30, point.y() - 50 };
}


void ColorPicker::mouseMoveEvent(QMouseEvent * event) 
{
   auto pos = mapFromGlobal(QCursor::pos());
   
   colorView.setColor(QColor(image.pixel(pos)));
   colorView.move(add_offset(pos));
}  


void ColorPicker::mousePressEvent(QMouseEvent * event)
{
   auto pos = mapFromGlobal(QCursor::pos());
   QString color_name = QColor(image.pixel(pos)).name();

   QApplication::clipboard()->setText(color_name);
   printf("%s", color_name.toStdString().c_str());
   QApplication::exit(0);
}


ColorPicker::ColorPicker(QWidget * parent)
   : QWidget(parent)
{
   QScreen * screen = QGuiApplication::primaryScreen();
   image = screen->grabWindow(0).toImage();

   auto pos = mapFromGlobal(QCursor::pos());
   colorView.init({ 66, 66 }, QColor(image.pixel(pos)), nullptr);

   setMouseTracking(true);
   setWindowOpacity(0);
   colorView.show();
}
