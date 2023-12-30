# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = dynamics_lib
TARGET      = sfun
MODULE_SRCS   = c1_dynamics_lib.cu c2_dynamics_lib.cu c3_dynamics_lib.cu c4_dynamics_lib.cu c5_dynamics_lib.cu c6_dynamics_lib.cu c7_dynamics_lib.cu c8_dynamics_lib.cu c9_dynamics_lib.cu c10_dynamics_lib.cu c11_dynamics_lib.cu c12_dynamics_lib.cu c13_dynamics_lib.cu c14_dynamics_lib.cu c15_dynamics_lib.cu c16_dynamics_lib.cu c17_dynamics_lib.cu c18_dynamics_lib.cu c19_dynamics_lib.cu c20_dynamics_lib.cu c21_dynamics_lib.cu c22_dynamics_lib.cu c23_dynamics_lib.cu c24_dynamics_lib.cu half_type.cpp
MODEL_SRC  = dynamics_lib_sfun.cu
MODEL_REG = 
MAKEFILE    = dynamics_lib_sfun.mak
MATLAB_ROOT  = C:\Program Files\MATLAB\R2023b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
NVCC   = nvcc
.SUFFIXES: .cu
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "C:\eagle_evsr24\slprj\_sfprj\EVSR24\dynamics_lib\sfun\src" /I "C:\eagle_evsr24"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "$(MATLAB_ROOT)\sys\cuda\win64\cuda\include" \
    /I "$(MATLAB_ROOT)/toolbox/shared/gpucoder/src/cuda/export/include/cuda" \
    /I "$(MATLAB_ROOT)/toolbox/gpucoder/gpucoder/src/cuda/thrust" \
    /I "C:\Program Files\MATLAB\R2023b\extern\include" \
    /I "C:\Program Files\MATLAB\R2023b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2023b\simulink\include\sf_runtime" \
    /I "C:\Program Files\MATLAB\R2023b\stateflow\c\mex\include" \
    /I "C:\Program Files\MATLAB\R2023b\rtw\c\src" \
    /I "C:\eagle_EVSR24\slprj\_sfprj\EVSR24\dynamics_lib\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = -Xcompiler "/c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD " 
LDFLAGS = -Xlinker "/nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  "
NVCC_INCLUDE_PATH = $(INCLUDE_PATH:/I=-I)
CUFLAGS_NO_RDC = -c -arch sm_35 -DMW_CUDA_ARCH=350 -noprof -ldir "$(MATLAB_ROOT)/bin/win64"
CUFLAGS = $(CUFLAGS_NO_RDC) -rdc=true
GPUCODER_CUDA_UTIL_LIB = "$(MATLAB_ROOT)/bin/win64/gpucoder_cuda.lib"
CULDFLAGS = -arch sm_35 -DMW_CUDA_ARCH=350 -Xlinker /NODEFAULTLIB:libcmt.lib -I"$(MATLAB_ROOT)\sys\cuda\win64\cuda\include" -L"$(MATLAB_ROOT)\sys\cuda\win64\cuda\lib\x64" -L"$(MATLAB_ROOT)\bin\win64" cudart.lib cublas.lib cusolver.lib cufft.lib cusparse.lib curand.lib
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS     = \
     "c_mexapi_version.obj" \

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.cu=.obj)
REQ_OBJS3 = $(REQ_OBJS2:.c=.obj)
OBJS = $(REQ_OBJS3) $(USER_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = dynamics_lib_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

$(MODEL)_$(TARGET).lib : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
	@echo ### Linking ...
	$(LD) -lib /OUT:$(MODEL)_$(TARGET).lib @$(OBJLIST_FILE) $(USER_LIBS) $(THIRD_PARTY_LIBS)
	@echo ### Created Stateflow library $@
.c.obj :
	@echo ### Compiling "$<"
	$(NVCC) $(CUFLAGS) $(CFLAGS) $(NVCC_INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(NVCC) $(CUFLAGS) $(CFLAGS) $(NVCC_INCLUDE_PATH) "$<"

.cu.obj :
	@echo ### Compiling "$<" 
	$(NVCC) $(CUFLAGS) $(CFLAGS) $(NVCC_INCLUDE_PATH) "$<"


c_mexapi_version.obj :  "C:\Program Files\MATLAB\R2023b\extern\version\c_mexapi_version.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2023b\extern\version\c_mexapi_version.c"
 $(NVCC) $(CUFLAGS_NO_RDC) $(CFLAGS) $(NVCC_INCLUDE_PATH) $(CUINCLUDE) "C:\Program Files\MATLAB\R2023b\extern\version\c_mexapi_version.c"
