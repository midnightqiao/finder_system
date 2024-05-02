#include "personview.h"
#include "ui_personview.h"

PersonView::PersonView(QWidget *parent) :
    QTableView(parent),
    ui(new Ui::personView)
{
    ui->setupUi(this);
    model.setTable("person");

    model.select();

    setModel(&model);

    setEditTriggers(QAbstractItemView::NoEditTriggers);
}

PersonView::~PersonView()
{
    delete ui;
}

void PersonView::updatePerson()
{
    model.select();
}
