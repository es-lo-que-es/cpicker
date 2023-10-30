#include "QApplication"
#include "color_picker.hpp"


int main(int argc, char * argv[])
{
   QApplication app(argc, argv);
   ColorPicker color_picker;

   color_picker.showFullScreen();

   return app.exec();
}

