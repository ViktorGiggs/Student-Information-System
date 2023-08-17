/********************************************************************************
** Form generated from reading UI file 'basicform.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICFORM_H
#define UI_BASICFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicForm
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *MyProfileLinkButton;
    QCommandLinkButton *MyCoursesLinkButton;
    QCommandLinkButton *MyGroupLinkButton;
    QCommandLinkButton *InformationLinkButton;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *PhotoLabel;
    QLabel *ProfilePhoto;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *ProfoleSurnamelabel;
    QLabel *ProfileNamelabel;
    QLabel *ProfileFacultylabel;
    QLabel *ProfileGroupLabel;
    QLabel *ProfileScoreLabel;
    QLabel *ProfileArrearsLabel;
    QVBoxLayout *verticalLayout_6;
    QLabel *ProfileSurName;
    QLabel *ProfielName;
    QLabel *ProfileFaculty;
    QLabel *ProfileGroup;
    QLabel *ProfileTotalScore;
    QLabel *ProfileArrears;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QTableView *tableView_2;
    QWidget *page_4;
    QGridLayout *gridLayout_5;
    QLabel *infolable;

    void setupUi(QWidget *BasicForm)
    {
        if (BasicForm->objectName().isEmpty())
            BasicForm->setObjectName(QString::fromUtf8("BasicForm"));
        BasicForm->resize(834, 516);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BasicForm->sizePolicy().hasHeightForWidth());
        BasicForm->setSizePolicy(sizePolicy);
        BasicForm->setMouseTracking(false);
        horizontalLayout = new QHBoxLayout(BasicForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MyProfileLinkButton = new QCommandLinkButton(BasicForm);
        MyProfileLinkButton->setObjectName(QString::fromUtf8("MyProfileLinkButton"));

        verticalLayout->addWidget(MyProfileLinkButton);

        MyCoursesLinkButton = new QCommandLinkButton(BasicForm);
        MyCoursesLinkButton->setObjectName(QString::fromUtf8("MyCoursesLinkButton"));

        verticalLayout->addWidget(MyCoursesLinkButton);

        MyGroupLinkButton = new QCommandLinkButton(BasicForm);
        MyGroupLinkButton->setObjectName(QString::fromUtf8("MyGroupLinkButton"));

        verticalLayout->addWidget(MyGroupLinkButton);

        InformationLinkButton = new QCommandLinkButton(BasicForm);
        InformationLinkButton->setObjectName(QString::fromUtf8("InformationLinkButton"));

        verticalLayout->addWidget(InformationLinkButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(BasicForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        stackedWidget = new QStackedWidget(BasicForm);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QFont font;
        font.setPointSize(12);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        PhotoLabel = new QLabel(page);
        PhotoLabel->setObjectName(QString::fromUtf8("PhotoLabel"));

        gridLayout_2->addWidget(PhotoLabel, 0, 0, 1, 1);

        ProfilePhoto = new QLabel(page);
        ProfilePhoto->setObjectName(QString::fromUtf8("ProfilePhoto"));
        ProfilePhoto->setFrameShape(QFrame::Panel);
        ProfilePhoto->setScaledContents(true);

        gridLayout_2->addWidget(ProfilePhoto, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ProfoleSurnamelabel = new QLabel(page);
        ProfoleSurnamelabel->setObjectName(QString::fromUtf8("ProfoleSurnamelabel"));
        ProfoleSurnamelabel->setFont(font);

        verticalLayout_5->addWidget(ProfoleSurnamelabel);

        ProfileNamelabel = new QLabel(page);
        ProfileNamelabel->setObjectName(QString::fromUtf8("ProfileNamelabel"));
        ProfileNamelabel->setFont(font);

        verticalLayout_5->addWidget(ProfileNamelabel);

        ProfileFacultylabel = new QLabel(page);
        ProfileFacultylabel->setObjectName(QString::fromUtf8("ProfileFacultylabel"));
        ProfileFacultylabel->setFont(font);

        verticalLayout_5->addWidget(ProfileFacultylabel);

        ProfileGroupLabel = new QLabel(page);
        ProfileGroupLabel->setObjectName(QString::fromUtf8("ProfileGroupLabel"));
        ProfileGroupLabel->setFont(font);

        verticalLayout_5->addWidget(ProfileGroupLabel);

        ProfileScoreLabel = new QLabel(page);
        ProfileScoreLabel->setObjectName(QString::fromUtf8("ProfileScoreLabel"));
        ProfileScoreLabel->setFont(font);

        verticalLayout_5->addWidget(ProfileScoreLabel);

        ProfileArrearsLabel = new QLabel(page);
        ProfileArrearsLabel->setObjectName(QString::fromUtf8("ProfileArrearsLabel"));
        ProfileArrearsLabel->setFont(font);

        verticalLayout_5->addWidget(ProfileArrearsLabel);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        ProfileSurName = new QLabel(page);
        ProfileSurName->setObjectName(QString::fromUtf8("ProfileSurName"));

        verticalLayout_6->addWidget(ProfileSurName);

        ProfielName = new QLabel(page);
        ProfielName->setObjectName(QString::fromUtf8("ProfielName"));

        verticalLayout_6->addWidget(ProfielName);

        ProfileFaculty = new QLabel(page);
        ProfileFaculty->setObjectName(QString::fromUtf8("ProfileFaculty"));

        verticalLayout_6->addWidget(ProfileFaculty);

        ProfileGroup = new QLabel(page);
        ProfileGroup->setObjectName(QString::fromUtf8("ProfileGroup"));

        verticalLayout_6->addWidget(ProfileGroup);

        ProfileTotalScore = new QLabel(page);
        ProfileTotalScore->setObjectName(QString::fromUtf8("ProfileTotalScore"));

        verticalLayout_6->addWidget(ProfileTotalScore);

        ProfileArrears = new QLabel(page);
        ProfileArrears->setObjectName(QString::fromUtf8("ProfileArrears"));

        verticalLayout_6->addWidget(ProfileArrears);


        gridLayout->addLayout(verticalLayout_6, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setTabKeyNavigation(true);
        tableView->horizontalHeader()->setMinimumSectionSize(37);
        tableView->horizontalHeader()->setDefaultSectionSize(190);
        tableView->verticalHeader()->setMinimumSectionSize(31);
        tableView->verticalHeader()->setDefaultSectionSize(37);
        tableView->verticalHeader()->setHighlightSections(true);

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableView_2 = new QTableView(page_3);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_4->addWidget(tableView_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        infolable = new QLabel(page_4);
        infolable->setObjectName(QString::fromUtf8("infolable"));
        QFont font1;
        font1.setPointSize(15);
        infolable->setFont(font1);

        gridLayout_5->addWidget(infolable, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(BasicForm);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BasicForm);
    } // setupUi

    void retranslateUi(QWidget *BasicForm)
    {
        BasicForm->setWindowTitle(QCoreApplication::translate("BasicForm", "Profile", nullptr));
        MyProfileLinkButton->setText(QCoreApplication::translate("BasicForm", "My Profile", nullptr));
        MyCoursesLinkButton->setText(QCoreApplication::translate("BasicForm", "My Courses", nullptr));
        MyGroupLinkButton->setText(QCoreApplication::translate("BasicForm", "My Group", nullptr));
        InformationLinkButton->setText(QCoreApplication::translate("BasicForm", "Information", nullptr));
        PhotoLabel->setText(QCoreApplication::translate("BasicForm", "Photo", nullptr));
        ProfilePhoto->setText(QString());
        ProfoleSurnamelabel->setText(QCoreApplication::translate("BasicForm", "Surname:", nullptr));
        ProfileNamelabel->setText(QCoreApplication::translate("BasicForm", "Name:", nullptr));
        ProfileFacultylabel->setText(QCoreApplication::translate("BasicForm", "Faculty:", nullptr));
        ProfileGroupLabel->setText(QCoreApplication::translate("BasicForm", "Group:", nullptr));
        ProfileScoreLabel->setText(QCoreApplication::translate("BasicForm", "Total score:", nullptr));
        ProfileArrearsLabel->setText(QCoreApplication::translate("BasicForm", "Arrears:", nullptr));
        ProfileSurName->setText(QCoreApplication::translate("BasicForm", "ProfileSurName", nullptr));
        ProfielName->setText(QCoreApplication::translate("BasicForm", "ProfileName", nullptr));
        ProfileFaculty->setText(QCoreApplication::translate("BasicForm", "ProfileFaculty", nullptr));
        ProfileGroup->setText(QCoreApplication::translate("BasicForm", "ProfileGroup", nullptr));
        ProfileTotalScore->setText(QCoreApplication::translate("BasicForm", "ProfileTotalScore", nullptr));
        ProfileArrears->setText(QCoreApplication::translate("BasicForm", "ProfileArrears", nullptr));
        infolable->setText(QCoreApplication::translate("BasicForm", "Sections and improvements will appear with updates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BasicForm: public Ui_BasicForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICFORM_H
