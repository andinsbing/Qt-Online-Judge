#ifndef SUBMITDIALOG_H
#define SUBMITDIALOG_H

#include <QDialog>

namespace Ui
{
class SubmitDialog;
}

class SubmitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SubmitDialog(QWidget* parent = nullptr);
    ~SubmitDialog();

signals:
    void submit(int index, QString code, const QString& language);

public:
    void start();
private slots:
    void onSubmit();

private:
    bool checkCode(const QString& code);

private:
    Ui::SubmitDialog* ui;
    QString           defaultText;
};

#endif  // SUBMITDIALOG_H
