#pragma once
#include "QMap"
#include "QString"
#include <QJsonDocument>
#include <QJsonObject>
#include "QFile"
#include "QIODevice"
#include "QDebug"
//! �ı�����
class Translator
{
public:
	//! �洢��������
	QJsonObject* json;
	//! �����ļ�·��
	QString filepath;

public:
	Translator(QString filepath);
	~Translator();

private:
	//! ��ȡ�����ļ�
	QJsonObject* readJson();
	
};
