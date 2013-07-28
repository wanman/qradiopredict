#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fgtelnet.h"
#include "databaseapi.h"
#include "util.h"
#include "fgremote.h"
#include "toolbox.h"
#include <vector>
#include "MapGraphicsView.h"

#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QMap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    FGTelnet *_telnet;
    DatabaseApi *_db;
    FGRemote *_remote;

    
private slots:
    void on_actionExit_triggered();
    void connectionSuccess();
    void connectionFailure();
    void startFGFS();

    void setMobileType();
    void setGroundType();
    void setFPType();

public slots:
    void mapClick(QPointF pos);
    void setMapItems(quint8 zoom);

private:
    Ui::MainWindow *ui;
    MapGraphicsView *_view;
    int _placed_item_type;
    toolbox *_tb;
    QMap<QGraphicsPixmapItem *, QPointF> _map_mobiles;
    QMap<QGraphicsPixmapItem *, QPointF> _map_ground;
    QMap<QGraphicsPixmapItem *, QPointF> _map_fppos;

};

#endif // MAINWINDOW_H
