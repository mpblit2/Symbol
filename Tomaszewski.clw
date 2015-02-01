; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTomaszewskiView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Tomaszewski.h"
LastPage=0

ClassCount=6
Class1=CTomaszewskiApp
Class2=CTomaszewskiDoc
Class3=CTomaszewskiView
Class4=CMainFrame

ResourceCount=6
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX (English (U.S.))
Class5=CAboutDlg
Resource4=IDR_SYMBOL_MENU
Class6=CParam
Resource5=IDR_MAINFRAME (English (U.S.))
Resource6=IDD_PARAMETRY

[CLS:CTomaszewskiApp]
Type=0
HeaderFile=Tomaszewski.h
ImplementationFile=Tomaszewski.cpp
Filter=N

[CLS:CTomaszewskiDoc]
Type=0
HeaderFile=TomaszewskiDoc.h
ImplementationFile=TomaszewskiDoc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=ID_SYMBOL_STOP

[CLS:CTomaszewskiView]
Type=0
HeaderFile=TomaszewskiView.h
ImplementationFile=TomaszewskiView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CTomaszewskiView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=Tomaszewski.cpp
ImplementationFile=Tomaszewski.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
CommandCount=16
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command16=ID_APP_ABOUT

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
CommandCount=14
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE


[TB:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_SYMBOL_L
Command10=ID_SYMBOL_G
Command11=ID_SYMBOL_D
Command12=ID_SYMBOL_P
Command13=ID_SYMBOL_STOP
CommandCount=13

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_SYMBOL_STOP
Command17=ID_SYMBOL_G
Command18=ID_SYMBOL_D
Command19=ID_SYMBOL_P
Command20=ID_SYMBOL_L
Command21=ID_ZMIEN_TAK
Command22=ID_ZMIEN_NIE
Command23=ID_PARAMETRY
Command24=ID_APP_ABOUT
CommandCount=24

[ACL:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=11
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352

[DLG:IDD_PARAMETRY]
Type=1
Class=CParam
ControlCount=19
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342178055
Control4=IDC_SYMBOL_SIZE,combobox,1344340226
Control5=IDC_SYMBOL_SPEED,combobox,1344340226
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,button,1342178055
Control9=IDC_COLOR_C1,combobox,1344339970
Control10=IDC_COLOR_C2,combobox,1344339970
Control11=IDC_COLOR_C3,combobox,1344339970
Control12=IDC_STATIC,static,1342308352
Control13=IDC_STATIC,static,1342308352
Control14=IDC_STATIC,static,1342308352
Control15=IDC_STATIC,button,1342178055
Control16=IDC_STATIC,static,1342308352
Control17=IDC_POLOZENIE_X,combobox,1344340226
Control18=IDC_POLOZENIE_Y,combobox,1344340226
Control19=IDC_STATIC,static,1342308352

[CLS:CParam]
Type=0
HeaderFile=Param.h
ImplementationFile=Param.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_POLOZENIE_X
VirtualFilter=dWC

[MNU:IDR_SYMBOL_MENU]
Type=1
Class=CTomaszewskiView
Command1=ID_SYMBOL_STOP
Command2=ID_SYMBOL_G
Command3=ID_SYMBOL_D
Command4=ID_SYMBOL_P
Command5=ID_SYMBOL_L
Command6=ID_ZMIEN_TAK
Command7=ID_ZMIEN_NIE
CommandCount=7

