
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  SMSWTD.obj \
  CommunicationChannel.obj \
  Environment.obj \
  Civilian.obj \
  DisasterResponder.obj \
  Government.obj \
  Maintainer.obj \
  SMSWTDSystemController.obj \
  Sensor.obj \
  SensorManager.obj \
  AlertManager.obj \
  UserInterface.obj \
  GovernmentChannels.obj \
  SMSModule.obj \
  PushNotificationModule.obj \
  SocialMediaModule.obj \
  UnderWaterSensor.obj \
  SatelliteSensor.obj \
  AircraftSensor.obj \
  DataStorage.obj \
  SYSTEM_CONTEXT.obj \
  SERVICES_UCS.obj \
  DESIGN.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






SMSWTD.obj : SMSWTD.cpp SMSWTD.h    SYSTEM_CONTEXT.h Government.h Civilian.h Environment.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



CommunicationChannel.obj : CommunicationChannel.cpp CommunicationChannel.h    SYSTEM_CONTEXT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationChannel.obj" "CommunicationChannel.cpp" 



Environment.obj : Environment.cpp Environment.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Environment.obj" "Environment.cpp" 



Civilian.obj : Civilian.cpp Civilian.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Civilian.obj" "Civilian.cpp" 



DisasterResponder.obj : DisasterResponder.cpp DisasterResponder.h    SYSTEM_CONTEXT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DisasterResponder.obj" "DisasterResponder.cpp" 



Government.obj : Government.cpp Government.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government.obj" "Government.cpp" 



Maintainer.obj : Maintainer.cpp Maintainer.h    SYSTEM_CONTEXT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Maintainer.obj" "Maintainer.cpp" 



SMSWTDSystemController.obj : SMSWTDSystemController.cpp SMSWTDSystemController.h    DESIGN.h SensorManager.h UserInterface.h AlertManager.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTDSystemController.obj" "SMSWTDSystemController.cpp" 



Sensor.obj : Sensor.cpp Sensor.h    DESIGN.h SensorManager.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensor.obj" "Sensor.cpp" 



SensorManager.obj : SensorManager.cpp SensorManager.h    DESIGN.h SMSWTDSystemController.h Sensor.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorManager.obj" "SensorManager.cpp" 



AlertManager.obj : AlertManager.cpp AlertManager.h    DESIGN.h SMSModule.h PushNotificationModule.h SocialMediaModule.h SMSWTDSystemController.h GovernmentChannels.h UserInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AlertManager.obj" "AlertManager.cpp" 



UserInterface.obj : UserInterface.cpp UserInterface.h    DESIGN.h SMSWTDSystemController.h AlertManager.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UserInterface.obj" "UserInterface.cpp" 



GovernmentChannels.obj : GovernmentChannels.cpp GovernmentChannels.h    DESIGN.h AlertManager.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GovernmentChannels.obj" "GovernmentChannels.cpp" 



SMSModule.obj : SMSModule.cpp SMSModule.h    DESIGN.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSModule.obj" "SMSModule.cpp" 



PushNotificationModule.obj : PushNotificationModule.cpp PushNotificationModule.h    DESIGN.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PushNotificationModule.obj" "PushNotificationModule.cpp" 



SocialMediaModule.obj : SocialMediaModule.cpp SocialMediaModule.h    DESIGN.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SocialMediaModule.obj" "SocialMediaModule.cpp" 



UnderWaterSensor.obj : UnderWaterSensor.cpp UnderWaterSensor.h    DESIGN.h Sensor.h SensorManager.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UnderWaterSensor.obj" "UnderWaterSensor.cpp" 



SatelliteSensor.obj : SatelliteSensor.cpp SatelliteSensor.h    DESIGN.h Sensor.h SensorManager.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SatelliteSensor.obj" "SatelliteSensor.cpp" 



AircraftSensor.obj : AircraftSensor.cpp AircraftSensor.h    DESIGN.h Sensor.h SensorManager.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AircraftSensor.obj" "AircraftSensor.cpp" 



DataStorage.obj : DataStorage.cpp DataStorage.h    DESIGN.h SensorManager.h SMSWTDSystemController.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataStorage.obj" "DataStorage.cpp" 



SYSTEM_CONTEXT.obj : SYSTEM_CONTEXT.cpp SYSTEM_CONTEXT.h    SMSWTD.h CommunicationChannel.h Environment.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SYSTEM_CONTEXT.obj" "SYSTEM_CONTEXT.cpp" 



SERVICES_UCS.obj : SERVICES_UCS.cpp SERVICES_UCS.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SERVICES_UCS.obj" "SERVICES_UCS.cpp" 



DESIGN.obj : DESIGN.cpp DESIGN.h    SMSWTDSystemController.h Sensor.h SensorManager.h AlertManager.h UserInterface.h GovernmentChannels.h SMSModule.h PushNotificationModule.h SocialMediaModule.h UnderWaterSensor.h SatelliteSensor.h AircraftSensor.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DESIGN.obj" "DESIGN.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist CommunicationChannel.obj erase CommunicationChannel.obj
	if exist Environment.obj erase Environment.obj
	if exist Civilian.obj erase Civilian.obj
	if exist DisasterResponder.obj erase DisasterResponder.obj
	if exist Government.obj erase Government.obj
	if exist Maintainer.obj erase Maintainer.obj
	if exist SMSWTDSystemController.obj erase SMSWTDSystemController.obj
	if exist Sensor.obj erase Sensor.obj
	if exist SensorManager.obj erase SensorManager.obj
	if exist AlertManager.obj erase AlertManager.obj
	if exist UserInterface.obj erase UserInterface.obj
	if exist GovernmentChannels.obj erase GovernmentChannels.obj
	if exist SMSModule.obj erase SMSModule.obj
	if exist PushNotificationModule.obj erase PushNotificationModule.obj
	if exist SocialMediaModule.obj erase SocialMediaModule.obj
	if exist UnderWaterSensor.obj erase UnderWaterSensor.obj
	if exist SatelliteSensor.obj erase SatelliteSensor.obj
	if exist AircraftSensor.obj erase AircraftSensor.obj
	if exist DataStorage.obj erase DataStorage.obj
	if exist SYSTEM_CONTEXT.obj erase SYSTEM_CONTEXT.obj
	if exist SERVICES_UCS.obj erase SERVICES_UCS.obj
	if exist DESIGN.obj erase DESIGN.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
