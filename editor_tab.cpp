#include <stdio.h>
#include <string>
#include <errno.h>
#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QTextEdit>

class Editor{

public:

  Editor(){

  };

};

int main(int argc, char *argv[] ){
  
  QApplication app(argc, argv);

  QWidget window;
  QTextEdit edit_box (&window);

  window.resize(700, 700);
  window.setWindowTitle("Editor");
  window.show();

  return  app.exec();
}

