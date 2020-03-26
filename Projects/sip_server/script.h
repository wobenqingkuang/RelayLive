#pragma once
#include "SipServer.h"

namespace Script {
    /** ��ʼ�� */
    void Init();

    /** �������� */
    void Cleanup();

    /** �����豸������״̬ */
    bool UpdateStatus(string code, string online);

    /** �����豸�ľ�γ�� */
    bool UpdatePos(string code, string lat, string lon);

    /** ����в����µ��豸 */
    bool InsertDev(SipServer::DevInfo* dev);

    /** ������ݿ��豸�� */
    bool CleanDev(int64_t t);
}