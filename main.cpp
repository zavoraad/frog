#include "frog.h"

int main(int argc, char *argv[] ){
  
  QApplication app(argc, argv);

  Frog frog;
  frog.show();

  return  app.exec();
}

