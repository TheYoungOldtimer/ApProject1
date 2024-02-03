/****************************************************************************
** Meta object code from reading C++ file 'membermain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MainWindowApp/membermain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'membermain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memberMain_t {
    QByteArrayData data[111];
    char stringdata0[1890];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_memberMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_memberMain_t qt_meta_stringdata_memberMain = {
    {
QT_MOC_LITERAL(0, 0, 10), // "memberMain"
QT_MOC_LITERAL(1, 11, 15), // "gridOrg_disable"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "gridOrg_enable"
QT_MOC_LITERAL(4, 43, 19), // "gridProject_disable"
QT_MOC_LITERAL(5, 63, 18), // "gridProject_enable"
QT_MOC_LITERAL(6, 82, 16), // "gridTeam_disable"
QT_MOC_LITERAL(7, 99, 15), // "gridTeam_enable"
QT_MOC_LITERAL(8, 115, 15), // "gridTask_enable"
QT_MOC_LITERAL(9, 131, 16), // "gridTask_disable"
QT_MOC_LITERAL(10, 148, 13), // "orgman_enable"
QT_MOC_LITERAL(11, 162, 14), // "orgman_disable"
QT_MOC_LITERAL(12, 177, 14), // "teamman_enable"
QT_MOC_LITERAL(13, 192, 15), // "teamman_disable"
QT_MOC_LITERAL(14, 208, 14), // "project_enable"
QT_MOC_LITERAL(15, 223, 15), // "project_disable"
QT_MOC_LITERAL(16, 239, 11), // "task_enable"
QT_MOC_LITERAL(17, 251, 12), // "task_disable"
QT_MOC_LITERAL(18, 264, 15), // "updatelisttasks"
QT_MOC_LITERAL(19, 280, 4), // "path"
QT_MOC_LITERAL(20, 285, 18), // "on_newtask_clicked"
QT_MOC_LITERAL(21, 304, 19), // "on_edittask_clicked"
QT_MOC_LITERAL(22, 324, 27), // "on_listWidget_3_itemClicked"
QT_MOC_LITERAL(23, 352, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(24, 369, 4), // "item"
QT_MOC_LITERAL(25, 374, 22), // "on_updatelists_clicked"
QT_MOC_LITERAL(26, 397, 13), // "findlisttasks"
QT_MOC_LITERAL(27, 411, 19), // "deleteFromlisttasks"
QT_MOC_LITERAL(28, 431, 1), // "s"
QT_MOC_LITERAL(29, 433, 22), // "on_archivetask_clicked"
QT_MOC_LITERAL(30, 456, 16), // "append_toa_jfile"
QT_MOC_LITERAL(31, 473, 3), // "obj"
QT_MOC_LITERAL(32, 477, 3), // "doc"
QT_MOC_LITERAL(33, 481, 18), // "on_newteam_clicked"
QT_MOC_LITERAL(34, 500, 21), // "on_newproject_clicked"
QT_MOC_LITERAL(35, 522, 24), // "on_updatelists_2_clicked"
QT_MOC_LITERAL(36, 547, 18), // "updatelistprojects"
QT_MOC_LITERAL(37, 566, 22), // "on_editptoject_clicked"
QT_MOC_LITERAL(38, 589, 27), // "on_listWidget_4_itemClicked"
QT_MOC_LITERAL(39, 617, 15), // "findlistproject"
QT_MOC_LITERAL(40, 633, 21), // "deleteFromProjectlist"
QT_MOC_LITERAL(41, 655, 21), // "on_delproject_clicked"
QT_MOC_LITERAL(42, 677, 24), // "on_updatelists_3_clicked"
QT_MOC_LITERAL(43, 702, 15), // "updatelistteams"
QT_MOC_LITERAL(44, 718, 27), // "on_listWidget_2_itemClicked"
QT_MOC_LITERAL(45, 746, 19), // "on_editteam_clicked"
QT_MOC_LITERAL(46, 766, 12), // "findlistteam"
QT_MOC_LITERAL(47, 779, 19), // "deleteFromTeamtlist"
QT_MOC_LITERAL(48, 799, 18), // "on_delteam_clicked"
QT_MOC_LITERAL(49, 818, 17), // "on_neworg_clicked"
QT_MOC_LITERAL(50, 836, 24), // "on_updatelists_4_clicked"
QT_MOC_LITERAL(51, 861, 16), // "updatelistOrgans"
QT_MOC_LITERAL(52, 878, 18), // "on_editorg_clicked"
QT_MOC_LITERAL(53, 897, 13), // "findlistOrgan"
QT_MOC_LITERAL(54, 911, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(55, 937, 19), // "deleteFromorganlist"
QT_MOC_LITERAL(56, 957, 20), // "on_deleteorg_clicked"
QT_MOC_LITERAL(57, 978, 20), // "updatetaskMemberlist"
QT_MOC_LITERAL(58, 999, 18), // "updatetaskTeamlist"
QT_MOC_LITERAL(59, 1018, 21), // "updatetaskprojectlist"
QT_MOC_LITERAL(60, 1040, 27), // "on_listWidget_8_itemClicked"
QT_MOC_LITERAL(61, 1068, 20), // "on_asstoproj_clicked"
QT_MOC_LITERAL(62, 1089, 10), // "findmember"
QT_MOC_LITERAL(63, 1100, 5), // "email"
QT_MOC_LITERAL(64, 1106, 4), // "task"
QT_MOC_LITERAL(65, 1111, 12), // "deletemember"
QT_MOC_LITERAL(66, 1124, 11), // "readdmember"
QT_MOC_LITERAL(67, 1136, 11), // "findproject"
QT_MOC_LITERAL(68, 1148, 4), // "name"
QT_MOC_LITERAL(69, 1153, 13), // "deleteproject"
QT_MOC_LITERAL(70, 1167, 12), // "readdproject"
QT_MOC_LITERAL(71, 1180, 8), // "findteam"
QT_MOC_LITERAL(72, 1189, 10), // "deleteteam"
QT_MOC_LITERAL(73, 1200, 9), // "readdteam"
QT_MOC_LITERAL(74, 1210, 17), // "findtaskformember"
QT_MOC_LITERAL(75, 1228, 5), // "title"
QT_MOC_LITERAL(76, 1234, 19), // "deletetaskformember"
QT_MOC_LITERAL(77, 1254, 18), // "readdtaskformember"
QT_MOC_LITERAL(78, 1273, 18), // "findtaskforproject"
QT_MOC_LITERAL(79, 1292, 15), // "findtaskforteam"
QT_MOC_LITERAL(80, 1308, 11), // "projectname"
QT_MOC_LITERAL(81, 1320, 20), // "deletetaskforproject"
QT_MOC_LITERAL(82, 1341, 19), // "readdtaskforproject"
QT_MOC_LITERAL(83, 1361, 17), // "membersOfthisteam"
QT_MOC_LITERAL(84, 1379, 8), // "teamname"
QT_MOC_LITERAL(85, 1388, 20), // "on_asstoteam_clicked"
QT_MOC_LITERAL(86, 1409, 19), // "on_asstomem_clicked"
QT_MOC_LITERAL(87, 1429, 27), // "on_listWidget_5_itemClicked"
QT_MOC_LITERAL(88, 1457, 21), // "on_delmemteam_clicked"
QT_MOC_LITERAL(89, 1479, 14), // "findmeminteams"
QT_MOC_LITERAL(90, 1494, 7), // "memname"
QT_MOC_LITERAL(91, 1502, 13), // "delmeminteams"
QT_MOC_LITERAL(92, 1516, 13), // "addmeminteams"
QT_MOC_LITERAL(93, 1530, 9), // "newmember"
QT_MOC_LITERAL(94, 1540, 21), // "on_addmemteam_clicked"
QT_MOC_LITERAL(95, 1562, 27), // "on_listWidget_7_itemClicked"
QT_MOC_LITERAL(96, 1590, 20), // "membersOfthisproject"
QT_MOC_LITERAL(97, 1611, 24), // "on_delmemproject_clicked"
QT_MOC_LITERAL(98, 1636, 18), // "findmemwithproject"
QT_MOC_LITERAL(99, 1655, 17), // "delmemwithproject"
QT_MOC_LITERAL(100, 1673, 17), // "addmemwithproject"
QT_MOC_LITERAL(101, 1691, 24), // "on_addmemproject_clicked"
QT_MOC_LITERAL(102, 1716, 27), // "on_listWidget_6_itemClicked"
QT_MOC_LITERAL(103, 1744, 23), // "on_deletememorg_clicked"
QT_MOC_LITERAL(104, 1768, 16), // "findmemwithorgan"
QT_MOC_LITERAL(105, 1785, 15), // "delmemwithorgan"
QT_MOC_LITERAL(106, 1801, 15), // "addmemwithorgan"
QT_MOC_LITERAL(107, 1817, 18), // "membersOfthisOrgan"
QT_MOC_LITERAL(108, 1836, 9), // "organname"
QT_MOC_LITERAL(109, 1846, 19), // "on_editrole_clicked"
QT_MOC_LITERAL(110, 1866, 23) // "on_addmemberorg_clicked"

    },
    "memberMain\0gridOrg_disable\0\0gridOrg_enable\0"
    "gridProject_disable\0gridProject_enable\0"
    "gridTeam_disable\0gridTeam_enable\0"
    "gridTask_enable\0gridTask_disable\0"
    "orgman_enable\0orgman_disable\0"
    "teamman_enable\0teamman_disable\0"
    "project_enable\0project_disable\0"
    "task_enable\0task_disable\0updatelisttasks\0"
    "path\0on_newtask_clicked\0on_edittask_clicked\0"
    "on_listWidget_3_itemClicked\0"
    "QListWidgetItem*\0item\0on_updatelists_clicked\0"
    "findlisttasks\0deleteFromlisttasks\0s\0"
    "on_archivetask_clicked\0append_toa_jfile\0"
    "obj\0doc\0on_newteam_clicked\0"
    "on_newproject_clicked\0on_updatelists_2_clicked\0"
    "updatelistprojects\0on_editptoject_clicked\0"
    "on_listWidget_4_itemClicked\0findlistproject\0"
    "deleteFromProjectlist\0on_delproject_clicked\0"
    "on_updatelists_3_clicked\0updatelistteams\0"
    "on_listWidget_2_itemClicked\0"
    "on_editteam_clicked\0findlistteam\0"
    "deleteFromTeamtlist\0on_delteam_clicked\0"
    "on_neworg_clicked\0on_updatelists_4_clicked\0"
    "updatelistOrgans\0on_editorg_clicked\0"
    "findlistOrgan\0on_listWidget_itemClicked\0"
    "deleteFromorganlist\0on_deleteorg_clicked\0"
    "updatetaskMemberlist\0updatetaskTeamlist\0"
    "updatetaskprojectlist\0on_listWidget_8_itemClicked\0"
    "on_asstoproj_clicked\0findmember\0email\0"
    "task\0deletemember\0readdmember\0findproject\0"
    "name\0deleteproject\0readdproject\0"
    "findteam\0deleteteam\0readdteam\0"
    "findtaskformember\0title\0deletetaskformember\0"
    "readdtaskformember\0findtaskforproject\0"
    "findtaskforteam\0projectname\0"
    "deletetaskforproject\0readdtaskforproject\0"
    "membersOfthisteam\0teamname\0"
    "on_asstoteam_clicked\0on_asstomem_clicked\0"
    "on_listWidget_5_itemClicked\0"
    "on_delmemteam_clicked\0findmeminteams\0"
    "memname\0delmeminteams\0addmeminteams\0"
    "newmember\0on_addmemteam_clicked\0"
    "on_listWidget_7_itemClicked\0"
    "membersOfthisproject\0on_delmemproject_clicked\0"
    "findmemwithproject\0delmemwithproject\0"
    "addmemwithproject\0on_addmemproject_clicked\0"
    "on_listWidget_6_itemClicked\0"
    "on_deletememorg_clicked\0findmemwithorgan\0"
    "delmemwithorgan\0addmemwithorgan\0"
    "membersOfthisOrgan\0organname\0"
    "on_editrole_clicked\0on_addmemberorg_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memberMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      94,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  484,    2, 0x0a /* Public */,
       3,    0,  485,    2, 0x0a /* Public */,
       4,    0,  486,    2, 0x0a /* Public */,
       5,    0,  487,    2, 0x0a /* Public */,
       6,    0,  488,    2, 0x0a /* Public */,
       7,    0,  489,    2, 0x0a /* Public */,
       8,    0,  490,    2, 0x0a /* Public */,
       9,    0,  491,    2, 0x0a /* Public */,
      10,    0,  492,    2, 0x0a /* Public */,
      11,    0,  493,    2, 0x0a /* Public */,
      12,    0,  494,    2, 0x0a /* Public */,
      13,    0,  495,    2, 0x0a /* Public */,
      14,    0,  496,    2, 0x0a /* Public */,
      15,    0,  497,    2, 0x0a /* Public */,
      16,    0,  498,    2, 0x0a /* Public */,
      17,    0,  499,    2, 0x0a /* Public */,
      18,    1,  500,    2, 0x0a /* Public */,
      20,    0,  503,    2, 0x08 /* Private */,
      21,    0,  504,    2, 0x08 /* Private */,
      22,    1,  505,    2, 0x08 /* Private */,
      25,    0,  508,    2, 0x08 /* Private */,
      26,    2,  509,    2, 0x08 /* Private */,
      27,    2,  514,    2, 0x08 /* Private */,
      29,    0,  519,    2, 0x08 /* Private */,
      30,    3,  520,    2, 0x08 /* Private */,
      33,    0,  527,    2, 0x08 /* Private */,
      34,    0,  528,    2, 0x08 /* Private */,
      35,    0,  529,    2, 0x08 /* Private */,
      36,    1,  530,    2, 0x08 /* Private */,
      37,    0,  533,    2, 0x08 /* Private */,
      38,    1,  534,    2, 0x08 /* Private */,
      39,    2,  537,    2, 0x08 /* Private */,
      40,    2,  542,    2, 0x08 /* Private */,
      41,    0,  547,    2, 0x08 /* Private */,
      42,    0,  548,    2, 0x08 /* Private */,
      43,    1,  549,    2, 0x08 /* Private */,
      44,    1,  552,    2, 0x08 /* Private */,
      45,    0,  555,    2, 0x08 /* Private */,
      46,    2,  556,    2, 0x08 /* Private */,
      47,    2,  561,    2, 0x08 /* Private */,
      48,    0,  566,    2, 0x08 /* Private */,
      49,    0,  567,    2, 0x08 /* Private */,
      50,    0,  568,    2, 0x08 /* Private */,
      51,    1,  569,    2, 0x08 /* Private */,
      52,    0,  572,    2, 0x08 /* Private */,
      53,    2,  573,    2, 0x08 /* Private */,
      54,    1,  578,    2, 0x08 /* Private */,
      55,    2,  581,    2, 0x08 /* Private */,
      56,    0,  586,    2, 0x08 /* Private */,
      57,    0,  587,    2, 0x08 /* Private */,
      58,    0,  588,    2, 0x08 /* Private */,
      59,    0,  589,    2, 0x08 /* Private */,
      60,    1,  590,    2, 0x08 /* Private */,
      61,    0,  593,    2, 0x08 /* Private */,
      62,    2,  594,    2, 0x08 /* Private */,
      65,    1,  599,    2, 0x08 /* Private */,
      66,    1,  602,    2, 0x08 /* Private */,
      67,    2,  605,    2, 0x08 /* Private */,
      69,    1,  610,    2, 0x08 /* Private */,
      70,    1,  613,    2, 0x08 /* Private */,
      71,    2,  616,    2, 0x08 /* Private */,
      72,    1,  621,    2, 0x08 /* Private */,
      73,    1,  624,    2, 0x08 /* Private */,
      74,    2,  627,    2, 0x08 /* Private */,
      76,    1,  632,    2, 0x08 /* Private */,
      77,    1,  635,    2, 0x08 /* Private */,
      78,    2,  638,    2, 0x08 /* Private */,
      79,    2,  643,    2, 0x08 /* Private */,
      81,    1,  648,    2, 0x08 /* Private */,
      82,    1,  651,    2, 0x08 /* Private */,
      83,    1,  654,    2, 0x08 /* Private */,
      85,    0,  657,    2, 0x08 /* Private */,
      86,    0,  658,    2, 0x08 /* Private */,
      87,    1,  659,    2, 0x08 /* Private */,
      88,    0,  662,    2, 0x08 /* Private */,
      89,    1,  663,    2, 0x08 /* Private */,
      91,    1,  666,    2, 0x08 /* Private */,
      92,    1,  669,    2, 0x08 /* Private */,
      94,    0,  672,    2, 0x08 /* Private */,
      95,    1,  673,    2, 0x08 /* Private */,
      96,    1,  676,    2, 0x08 /* Private */,
      97,    0,  679,    2, 0x08 /* Private */,
      98,    1,  680,    2, 0x08 /* Private */,
      99,    1,  683,    2, 0x08 /* Private */,
     100,    1,  686,    2, 0x08 /* Private */,
     101,    0,  689,    2, 0x08 /* Private */,
     102,    1,  690,    2, 0x08 /* Private */,
     103,    0,  693,    2, 0x08 /* Private */,
     104,    1,  694,    2, 0x08 /* Private */,
     105,    1,  697,    2, 0x08 /* Private */,
     106,    1,  700,    2, 0x08 /* Private */,
     107,    1,  703,    2, 0x08 /* Private */,
     109,    0,  706,    2, 0x08 /* Private */,
     110,    0,  707,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   28,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QJsonDocument, QMetaType::QString,   31,   32,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   28,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   28,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   28,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   28,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   28,   19,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   28,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   63,   64,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void, QMetaType::QJsonObject,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   68,   64,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::QJsonObject,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   68,   64,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::QJsonObject,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   75,   63,
    QMetaType::Void, QMetaType::QString,   75,
    QMetaType::Void, QMetaType::QJsonObject,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   75,   63,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   75,   80,
    QMetaType::Void, QMetaType::QString,   75,
    QMetaType::Void, QMetaType::QJsonObject,   31,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QJsonObject,   93,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QJsonObject,   93,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QJsonObject,   93,
    QMetaType::Void, QMetaType::QString,  108,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void memberMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<memberMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gridOrg_disable(); break;
        case 1: _t->gridOrg_enable(); break;
        case 2: _t->gridProject_disable(); break;
        case 3: _t->gridProject_enable(); break;
        case 4: _t->gridTeam_disable(); break;
        case 5: _t->gridTeam_enable(); break;
        case 6: _t->gridTask_enable(); break;
        case 7: _t->gridTask_disable(); break;
        case 8: _t->orgman_enable(); break;
        case 9: _t->orgman_disable(); break;
        case 10: _t->teamman_enable(); break;
        case 11: _t->teamman_disable(); break;
        case 12: _t->project_enable(); break;
        case 13: _t->project_disable(); break;
        case 14: _t->task_enable(); break;
        case 15: _t->task_disable(); break;
        case 16: _t->updatelisttasks((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->on_newtask_clicked(); break;
        case 18: _t->on_edittask_clicked(); break;
        case 19: _t->on_listWidget_3_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 20: _t->on_updatelists_clicked(); break;
        case 21: _t->findlisttasks((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->deleteFromlisttasks((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->on_archivetask_clicked(); break;
        case 24: _t->append_toa_jfile((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< QJsonDocument(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 25: _t->on_newteam_clicked(); break;
        case 26: _t->on_newproject_clicked(); break;
        case 27: _t->on_updatelists_2_clicked(); break;
        case 28: _t->updatelistprojects((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->on_editptoject_clicked(); break;
        case 30: _t->on_listWidget_4_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 31: _t->findlistproject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->deleteFromProjectlist((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 33: _t->on_delproject_clicked(); break;
        case 34: _t->on_updatelists_3_clicked(); break;
        case 35: _t->updatelistteams((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->on_listWidget_2_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 37: _t->on_editteam_clicked(); break;
        case 38: _t->findlistteam((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 39: _t->deleteFromTeamtlist((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 40: _t->on_delteam_clicked(); break;
        case 41: _t->on_neworg_clicked(); break;
        case 42: _t->on_updatelists_4_clicked(); break;
        case 43: _t->updatelistOrgans((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->on_editorg_clicked(); break;
        case 45: _t->findlistOrgan((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 46: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 47: _t->deleteFromorganlist((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 48: _t->on_deleteorg_clicked(); break;
        case 49: _t->updatetaskMemberlist(); break;
        case 50: _t->updatetaskTeamlist(); break;
        case 51: _t->updatetaskprojectlist(); break;
        case 52: _t->on_listWidget_8_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 53: _t->on_asstoproj_clicked(); break;
        case 54: _t->findmember((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 55: _t->deletemember((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 56: _t->readdmember((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 57: _t->findproject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 58: _t->deleteproject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 59: _t->readdproject((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 60: _t->findteam((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 61: _t->deleteteam((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: _t->readdteam((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 63: _t->findtaskformember((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 64: _t->deletetaskformember((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 65: _t->readdtaskformember((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 66: _t->findtaskforproject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 67: _t->findtaskforteam((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        //case 68: _t->deletetaskforproject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        //case 69: _t->readdtaskforproject((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 70: _t->membersOfthisteam((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 71: _t->on_asstoteam_clicked(); break;
        case 72: _t->on_asstomem_clicked(); break;
        case 73: _t->on_listWidget_5_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 74: _t->on_delmemteam_clicked(); break;
        case 75: _t->findmeminteams((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 76: _t->delmeminteams((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 77: _t->addmeminteams((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 78: _t->on_addmemteam_clicked(); break;
        case 79: _t->on_listWidget_7_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 80: _t->membersOfthisproject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 81: _t->on_delmemproject_clicked(); break;
        case 82: _t->findmemwithproject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 83: _t->delmemwithproject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 84: _t->addmemwithproject((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 85: _t->on_addmemproject_clicked(); break;
        case 86: _t->on_listWidget_6_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 87: _t->on_deletememorg_clicked(); break;
        case 88: _t->findmemwithorgan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 89: _t->delmemwithorgan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 90: _t->addmemwithorgan((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 91: _t->membersOfthisOrgan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 92: _t->on_editrole_clicked(); break;
        case 93: _t->on_addmemberorg_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject memberMain::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_memberMain.data,
    qt_meta_data_memberMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *memberMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memberMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memberMain.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int memberMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 94)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 94;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 94)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 94;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
