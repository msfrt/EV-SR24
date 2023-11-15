MAKECMD         = "%MATLAB%\bin\win32\gmake"
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = raptor.tlc
SHELL           = cmd

MODEL_NAME		= EVSR24
MODULES			= AppMonitor1.c EVSR24_data.c Table_Functions.c XCP_App_XCP1.c can_CAN1.c can_CAN2.c can_general.c data.c faultmanager.c hw_user.c raptorCRC.c raptor_time.c rtGetInf.c rtGetNaN.c rt_nonfinite.c time.c xcp_protocol.c
NUMST           = 
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS =
NCSTATES =

MODELREFS                 = 
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = EVSR24_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..
MODELREF_TARGET_TYPE      = NONE

ifeq ($(MODELREF_TARGET_TYPE),NONE)
  # Top model for RTW
  $(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
               $(BIN_SETTING) $(LINK_OBJS) $(MODELREF_LINK_LIBS)
               $(LIBS)
               @echo "### Created $(BUILD_PRODUCT_TYPE): $@"
else
  # sub-model for RTW
  $(PRODUCT) : $(OBJS) $(LIBS)
               @rm -f $(MODELLIB)
               $(ar) ruvs $(MODELLIB) $(LINK_OBJS)
               @echo "### Created $(MODELLIB)"
               @echo "### Created $(BUILD_PRODUCT_TYPE): $@"
endif

$(MODEL_NAME).mot: 
	@echo ### Created Makefile ...

DO_NOT_USE_CHECKSUMS = 1

# EOF: raptor.tmf