#include "frog.h"
#include <QtGui>

Frog::Frog (QWidget *parent) : QWidget(parent) {
  queryEditor = new QTextEdit;
  QGridLayout *mainLayout = new QGridLayout;
  mainLayout->addWidget(queryEditor, 0, 0);
  setLayout(mainLayout);
  setWindowTitle("Frog");
}

