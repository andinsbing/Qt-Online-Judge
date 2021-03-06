#ifndef JUDGER_H
#define JUDGER_H

#include <QJsonObject>
#include <QObject>

class Judger : public QObject
{
    Q_OBJECT
public:
    explicit Judger(QObject* parent = nullptr);
    QJsonObject judge(const QJsonObject& task);

private:
    class QProcess* process;
    QString         programPath;
    QString         compilePath;
};

#endif  // JUDGER_H
