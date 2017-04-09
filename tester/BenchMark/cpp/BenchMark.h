﻿#ifndef __BenchMark_h__
#define __BenchMark_h__

// Qt lib import
#include <QObject>
#include <QSharedPointer>

namespace JQHttpServer
{
class TcpServerManage;
}

class BenchMark: public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY( BenchMark )

public:
    BenchMark() = default;

    ~BenchMark() = default;

private slots:
    void initTestCase();

    void cleanupTestCase();

    void benchMarkForOnce();

    void benchMarkFor5000();

private:
    QSharedPointer< JQHttpServer::TcpServerManage > tcpServerManage_;
};

#endif//__BenchMark_h__