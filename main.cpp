#include "mainwindow.h"
#include <QApplication>
#include <QtDBus/QtDBus>

#include "test_adap.h"
#include "test_interface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    new MainWindowAdaptor(&w);
    QDBusConnection connection = QDBusConnection::sessionBus();
    connection.registerService("manoj.test.service.name");
    connection.registerObject("/manojobjectpathname", &w);


    //calling test() through proxy object
    LocalMainWindowInterface *m_window = new LocalMainWindowInterface("manoj.test.service.name", "/manojobjectpathname", QDBusConnection::sessionBus(), 0);
    qDebug() << "Result from 1# " << m_window->test("via setParent");


    //calling test() without proxy
    //MainWindow *m_window = new MainWindow();
    //qDebug() << "Result from 1# " << m_window->test("via setParent");

    w.show();

    return a.exec();
}
