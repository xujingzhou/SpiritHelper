# Microsoft Developer Studio Project File - Name="HelpTip" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=HelpTip - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "HelpTip.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "HelpTip.mak" CFG="HelpTip - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "HelpTip - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "HelpTip - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "HelpTip - Win32 Release"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "HelpTip - Win32 Debug"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FD /GZ /c
# SUBTRACT CPP /Fr
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "HelpTip - Win32 Release"
# Name "HelpTip - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\About.cpp
# End Source File
# Begin Source File

SOURCE=.\Advertise.cpp
# End Source File
# Begin Source File

SOURCE=.\Animation.cpp
# End Source File
# Begin Source File

SOURCE=.\AsciiAnimation.cpp
# End Source File
# Begin Source File

SOURCE=.\BCMenu.cpp
# End Source File
# Begin Source File

SOURCE=.\CREDITSTATIC.CPP
# End Source File
# Begin Source File

SOURCE=.\DIB256.cpp
# End Source File
# Begin Source File

SOURCE=.\DIBSectionLite.cpp
# End Source File
# Begin Source File

SOURCE=.\DownloadAddress.cpp
# End Source File
# Begin Source File

SOURCE=.\FireRoutine.cpp
# End Source File
# Begin Source File

SOURCE=.\HelpTip.cpp
# End Source File
# Begin Source File

SOURCE=.\HelpTip.rc
# End Source File
# Begin Source File

SOURCE=.\HelpTipDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\HoverEdit.cpp
# End Source File
# Begin Source File

SOURCE=.\HyperLink.cpp
# End Source File
# Begin Source File

SOURCE=.\MirrorInWater.cpp
# End Source File
# Begin Source File

SOURCE=.\Ntray.cpp
# End Source File
# Begin Source File

SOURCE=.\ParticleRoutine.cpp
# End Source File
# Begin Source File

SOURCE=.\PlasmaRoutine.cpp
# End Source File
# Begin Source File

SOURCE=.\Splash.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\TransparentWnd.cpp
# End Source File
# Begin Source File

SOURCE=.\WaterRoutine.cpp
# End Source File
# Begin Source File

SOURCE=.\XInfoTip.cpp
# End Source File
# Begin Source File

SOURCE=.\xShadeButton.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\About.h
# End Source File
# Begin Source File

SOURCE=.\Advertise.h
# End Source File
# Begin Source File

SOURCE=.\Animation.h
# End Source File
# Begin Source File

SOURCE=.\AsciiAnimation.h
# End Source File
# Begin Source File

SOURCE=.\BCMenu.h
# End Source File
# Begin Source File

SOURCE=.\CREDITSTATIC.H
# End Source File
# Begin Source File

SOURCE=.\DIB256.h
# End Source File
# Begin Source File

SOURCE=.\DIBSectionLite.h
# End Source File
# Begin Source File

SOURCE=.\DownloadAddress.h
# End Source File
# Begin Source File

SOURCE=.\FireRoutine.h
# End Source File
# Begin Source File

SOURCE=.\HelpTip.h
# End Source File
# Begin Source File

SOURCE=.\HelpTipDlg.h
# End Source File
# Begin Source File

SOURCE=.\HoverEdit.h
# End Source File
# Begin Source File

SOURCE=.\HyperLink.h
# End Source File
# Begin Source File

SOURCE=.\MirrorInWater.h
# End Source File
# Begin Source File

SOURCE=.\Ntray.h
# End Source File
# Begin Source File

SOURCE=.\ParticleRoutine.h
# End Source File
# Begin Source File

SOURCE=.\PlasmaRoutine.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\Splash.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\TransparentWnd.h
# End Source File
# Begin Source File

SOURCE=.\WaterRoutine.h
# End Source File
# Begin Source File

SOURCE=.\XInfoTip.h
# End Source File
# Begin Source File

SOURCE=.\xShadeButton.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\ANGRY1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ANGRY2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ANGRY3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\angry4.bmp
# End Source File
# Begin Source File

SOURCE=.\res\check.bmp
# End Source File
# Begin Source File

SOURCE=.\res\drop.cur
# End Source File
# Begin Source File

SOURCE=.\res\Explosion.bmp
# End Source File
# Begin Source File

SOURCE=.\res\FUNK1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\FUNK2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\FUNK3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\FUNK4.bmp
# End Source File
# Begin Source File

SOURCE=.\res\HelpTip.ico
# End Source File
# Begin Source File

SOURCE=.\res\HelpTip.rc2
# End Source File
# Begin Source File

SOURCE=.\res\IDLE1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\IDLE2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\IDLE3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\IDLE4.bmp
# End Source File
# Begin Source File

SOURCE=.\res\IDLE5.bmp
# End Source File
# Begin Source File

SOURCE=.\res\IDLE6.bmp
# End Source File
# Begin Source File

SOURCE=.\res\IDLE7.bmp
# End Source File
# Begin Source File

SOURCE=.\res\IDLE8.bmp
# End Source File
# Begin Source File

SOURCE=.\res\logo.bmp
# End Source File
# Begin Source File

SOURCE=.\res\open.bmp
# End Source File
# Begin Source File

SOURCE=.\res\rock.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN10.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN4.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN5.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN6.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN7.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN8.bmp
# End Source File
# Begin Source File

SOURCE=.\res\RUN9.bmp
# End Source File
# Begin Source File

SOURCE=.\res\smile.bmp
# End Source File
# Begin Source File

SOURCE=.\res\smileFace.bmp
# End Source File
# Begin Source File

SOURCE=.\res\Splash.BMP
# End Source File
# Begin Source File

SOURCE=.\res\SPRITE.bmp
# End Source File
# Begin Source File

SOURCE=.\res\vckbase.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK10.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK4.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK5.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK6.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK7.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK8.bmp
# End Source File
# Begin Source File

SOURCE=.\res\WALK9.bmp
# End Source File
# End Group
# Begin Source File

SOURCE=.\res\IDR_WAVE.wav
# End Source File
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
