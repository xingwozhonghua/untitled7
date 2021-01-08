#include <QApplication>
#include <QMainWindow>
//#include <QWidgetUtil>
//#include <QApplicationSettings>
#include "TransparentTextEdit.h"
#include "TextEditWidget.h"


int main(int argc, char *argv[])
{
//    DApplication::loadDXcbPlugin();
    QGuiApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    QApplication a(argc, argv);
    a.setOrganizationName("deepin");
    a.setApplicationName("dtk-application");
    a.setApplicationVersion("1.0");
//    a.setProductIcon(QIcon(":/images/logo.svg"));
//    a.setProductName("Dtk Application");
//    a.setApplicationDescription("This is a dtk template application.");

//    a.loadTranslator();
    a.setApplicationDisplayName(QCoreApplication::translate("Main", "DTK Application"));

    // 保存程序的窗口主题设置
//    DApplicationSettings as;
//    Q_UNUSED(as)

    QMainWindow w;
    w.resize(800,600);
    w.show();

    TextEditWidget t(&w);
    t.move(200,200);
    t.show();

//    TextEditShadowWidget t2(&w);
//    t2.move(200,200);
//    t2.show();

//    Dtk::Widget::moveToCenter(&t);

    return a.exec();
}
