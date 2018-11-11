#include <msdCopyright.h>
/*******************************************************************************
* Peridot_msdLed_h
*
* DESCRIPTION:
*       API/Structure definitions for Marvell LED functionality.
*
* DEPENDENCIES:
*       None.
*
* FILE REVISION NUMBER:
*******************************************************************************/

#ifndef __Peridot_msdLed_h
#define __Peridot_msdLed_h

#include <msdApiTypes.h>
#include <msdSysConfig.h>

#ifdef __cplusplus
extern "C" {
#endif


/*******************************************************************************
* Peridot_gledForceOn
*
* DESCRIPTION:
*       This routine is to Force Port LED On
*
*
* INPUTS:
*       devNum  - physical devie number
*       portNum - logical port number
*       ledNum  - LED Index
*
* OUTPUTS:
*       None.
*
* RETURNS:
*       MSD_OK  - on success
*       MSD_FAIL  - on error
*       MSD_BAD_PARAM - if invalid parameter is given
*       MSD_NOT_SUPPORTED - device not support
*
* COMMENTS:
*       None
*
*******************************************************************************/
MSD_STATUS Peridot_gledForceOn
(
IN	MSD_QD_DEV	*dev,
IN  MSD_LPORT portNum,
IN  MSD_U8    ledNum
);

/*******************************************************************************
*   Peridot_gledForceOff
*
* DESCRIPTION:
*       This routine is to Force Port LED Off
*
*
* INPUTS:
*       devNum  - physical devie number
*       portNum - logical port number
*       ledNum  - LED Index
*
* OUTPUTS:
*       None.
*
* RETURNS:
*       MSD_OK  - on success
*       MSD_FAIL  - on error
*       MSD_BAD_PARAM - if invalid parameter is given
*       MSD_NOT_SUPPORTED - device not support
*
* COMMENTS:
*       None
*
*******************************************************************************/
MSD_STATUS Peridot_gledForceOff
(
IN	MSD_QD_DEV	*dev,
IN  MSD_LPORT portNum,
IN  MSD_U8    ledNum
);


/*******************************************************************************
* Peridot_gledLinkAct
*
* DESCRIPTION:
*       This routine is to set Port LED mode to link/act. That is:
*           off - no link, on - link, blink = activity.
*
*
* INPUTS:
*       devNum  - physical devie number
*       portNum - logical port number
*       ledNum  - LED Index
*
* OUTPUTS:
*       None.
*
* RETURNS:
*       MSD_OK  - on success
*       MSD_FAIL  - on error
*       MSD_BAD_PARAM - if invalid parameter is given
*       MSD_NOT_SUPPORTED - device not support
*
* COMMENTS:
*       None
*
*******************************************************************************/
MSD_STATUS Peridot_gledLinkAct
(
IN	MSD_QD_DEV	*dev,
IN  MSD_LPORT portNum,
IN  MSD_U8    ledNum
);


#ifdef __cplusplus
}
#endif

#endif /* __Peridot_msdLed_h */