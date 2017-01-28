#pragma once

#include <QObject>
#include <QByteArray>

class I_CommunicationService : public QObject
{
    Q_OBJECT

public:
    virtual ~I_CommunicationService() {}

    virtual void sendSerialData(const unsigned char* packet, int packetLength) = 0;
    virtual void sendInternetData(const QByteArray &data) = 0;
};

