#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtMonitor.h"
#include <QMenu>
#include <QList>
#include <QLabel>
#include <QTimer>

class QtMonitor : public QMainWindow
{
	Q_OBJECT

public:
	QtMonitor(QWidget *parent = Q_NULLPTR);
	~QtMonitor();
protected:
	bool eventFilter(QObject *watched, QEvent *event);
private:
	Ui::QtMonitorClass* ui;
private:
	bool videoMax;
	int videoCount;
	QString videoType;
	QMenu *videoMenu;
	QList<QLabel *> widgets;

private slots:
	void initForm();
	void initMenu();

	void play_video_all();
	void snapshot_video_one();
	void snapshot_video_all();

	void show_video_all();
	void show_video_4();
	void show_video_6();
	void show_video_8();
	void show_video_9();
	void show_video_16();

	void hide_video_all();
	void change_video(int index, int flag);
	void change_video_4(int index);
	void change_video_6(int index);
	void change_video_8(int index);
	void change_video_9(int index);
	void change_video_16(int index);
};
