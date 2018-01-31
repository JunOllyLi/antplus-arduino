#ifndef ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h
#define ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h

/* Channel Config */
#define ANTPLUS_BICYCLESPEED_CHANNELTYPE CHANNEL_TYPE_BIDIRECTIONAL_RECEIVE
#define ANTPLUS_BICYCLESPEED_DEVICETYPE 120
#define ANTPLUS_BICYCLESPEED_CHANNELPERIOD 8070
// 30 / 2.5 = 12
#define ANTPLUS_BICYCLESPEED_SEARCHTIMEOUT 12

/* Base DataPage */
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_DATAPAGE_BYTE 0
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_TOGGLE_BYTE   0
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_BIKESPEEDEVENTTIMELSB_BYTE 4
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_BIKESPEEDEVENTTIMEMSB_BYTE 5
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_CUMULATIVESPEEDREVOLUTIONCOUNTLSB_BYTE 6
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_CUMULATIVESPEEDREVOLUTIONCOUNTMSB_BYTE 7

#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_DATAPAGE_MASK 0x7F
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_TOGGLE_MASK   0x80

#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_TOGGLE_SHIFT  7
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_BIKESPEEDEVENTTIMEMSB_SHIFT 8
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_CUMULATIVESPEEDREVOLUTIONCOUNTMSB_SHIFT 8

#endif // ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h
