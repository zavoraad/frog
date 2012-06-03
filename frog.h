#ifndef FROG
#define FROG

#include <stdio.h>
#include <string>
#include <errno.h>
#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QTextEdit>

class Frog : public QWidget {
  
 public:
  Frog(QWidget *parent = 0);
  ~Frog(){delete queryEditor;};

 private:
  QTextEdit *queryEditor;

};

#endif
