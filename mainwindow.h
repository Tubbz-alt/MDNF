#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void buildTable();
    Ui::MainWindow *ui;
    void certainMDNF();
    void findMDNF(int, QStringList, int, int);
    bool checkDuplicates(QStringList);
    bool isBanned(int, QString);
    bool isOverlapped(int, QString);
    QString reverse(QString);
    QString getTerm(QString, QString);
    void updateVarCount(int);
    QStringList getSimpleColumn(QString);
    QStringList getColumn(QString);
    QString get2from10(QString);
    QString get10from2(QString);
    void setOriginalState();
    void MDNF();

signals:
    void mySignal();

private slots:
    void on_btnApply_clicked();
    void on_btnApply2_clicked();
    void changeCellValue(int row, int col);

};

#endif // MAINWINDOW_H
