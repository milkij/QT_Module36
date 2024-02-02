#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ImageButton redButton(nullptr);
    redButton.setFixedSize(150,150);
    redButton.move(1000,400);
    if(!redButton.getIsDown())QObject::connect(&redButton, &QPushButton::clicked, [](){std::cout << "clicked\n";});
    redButton.show();
    return app.exec();

}