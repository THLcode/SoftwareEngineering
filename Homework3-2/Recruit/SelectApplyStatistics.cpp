#include "SelectApplyStatistics.h"
#include "SelectApplyStatisticsUI.h"
#include "../Recruit.h"
#include "../ApplyInfoCollection.h"
SelectApplyStatistics::SelectApplyStatistics()
{
    SelectApplyStatisticsUI selectApplyStatisticsUI;

    selectApplyStatisticsUI.startInterface(this);
}
vector<Recruit> SelectApplyStatistics::showApplyStatistics(string currentLoginClient)
{
    ApplyInfoCollection ac;
    vector<Recruit> RList = ac.getApplyListById(currentLoginClient);

    return RList;
}
map<string, int> SelectApplyStatistics::getApplyNumByJob(vector<Recruit> rList) {
    map<string, int> jobCount;

    for (Recruit recruit : rList) {
        string job = recruit.getJob();  // �������� ����

        // �ʿ� ������ �̹� ��ϵǾ� �ִ� ��� �ش� ������ ������ ���� ������Ŵ
        if (jobCount.count(job) > 0) {
            jobCount[job]++;
        }
        // �ʿ� ������ ��ϵǾ� ���� ���� ��� �ش� ������ ������ ���� 1�� �ʱ�ȭ
        else {
            jobCount[job] = 1;
        }
    }
    return jobCount;
}