#ifndef CONFIRMDIALOG_H
#define CONFIRMDIALOG_H

#include <QDialog>

namespace Ui {
class confirmDialog;
}

class confirmDialog : public QDialog
{
    Q_OBJECT

public:
    explicit confirmDialog(QWidget *parent = 0);
    ~confirmDialog();
    Ui::confirmDialog *ui;

    bool isAccepted;

private slots:
    void on_buttonBox_accepted();

};

#endif // CONFIRMDIALOG_H
