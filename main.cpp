#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void binToDec(QVector<int>ve1, int n1)
    {
        int re1=0, re2, nN1;
        if(ve1.size() != n1)
        {   qDebug() << "error! size of vector must be n1"; }
        for(int i1=0;i1<n1;i1++)
        {
            if(ve1[i1] >1)
            {   qDebug() << "error....  num. must be binary";   }
            else
            {
                re1 += ve1[n1-1-i1]*qPow(2,i1);
            }
        }
        qDebug() << ve1 << re1;

    }



};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    QVector<int>ve1;
    int si1 = 5;
    ve1.resize(si1);
    for(int i1=0;i1<si1;i1++)
    {   ve1[i1] = qrand()%2;    }
    s1.binToDec(ve1,si1);

    for(int i1=0;i1<50;i1++)
    {
//        int n1 = qrand()%20;
    }

    return a.exec();
}
