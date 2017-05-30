#include "confirmdialog.h"

confirmDialog::confirmDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmDialog)
{
    ui->setupUi(this);
    isAccepted = false;
}

confirmDialog::~confirmDialog()
{
    delete ui;
}

void confirmDialog::on_buttonBox_accepted()
{
   isAccepted = true;
}
