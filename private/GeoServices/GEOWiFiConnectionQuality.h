//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOWiFiConnectionQuality : PBCodable <NSCopying>
{
    unsigned long long _bytesInActive;
    unsigned long long _bytesInTotal;
    unsigned long long _bytesOutActive;
    unsigned long long _bytesOutTotal;
    unsigned long long _dataStalls;
    unsigned long long _failedConnections;
    unsigned long long _faultyStay;
    double _lat;
    double _lon;
    unsigned long long _lowLQMStay;
    unsigned long long _lowqStay;
    unsigned long long _lqmTranCount;
    unsigned long long _overAllStay;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    unsigned long long _reTxBytes;
    unsigned long long _receivedDupes;
    unsigned long long _rxOutOfOrderBytes;
    unsigned long long _successfulConnections;
    unsigned long long _timeOfDay;
    unsigned long long _timestamp;
    NSMutableArray *_additionalUniqueIDs;
    unsigned int _assocReason;
    unsigned int _associatedTime;
    unsigned int _band;
    unsigned int _captiveFlag;
    int _cca;
    unsigned int _channel;
    unsigned int _channelWidth;
    unsigned int _colocatedState;
    unsigned int _disassocReason;
    NSMutableArray *_otherUniqueIDs;
    unsigned int _phyMode;
    float _roundTripTimeAvg;
    float _roundTripTimeAvgActive;
    float _roundTripTimeMin;
    float _roundTripTimeMinActive;
    float _roundTripTimeVar;
    float _roundTripTimeVarActive;
    int _rssi;
    unsigned int _securityType;
    int _snr;
    NSString *_uniqueID;
    _Bool _hotspot20;
    struct {
        unsigned int bytesInActive:1;
        unsigned int bytesInTotal:1;
        unsigned int bytesOutActive:1;
        unsigned int bytesOutTotal:1;
        unsigned int dataStalls:1;
        unsigned int failedConnections:1;
        unsigned int faultyStay:1;
        unsigned int lat:1;
        unsigned int lon:1;
        unsigned int lowLQMStay:1;
        unsigned int lowqStay:1;
        unsigned int lqmTranCount:1;
        unsigned int overAllStay:1;
        unsigned int packetsIn:1;
        unsigned int packetsOut:1;
        unsigned int reTxBytes:1;
        unsigned int receivedDupes:1;
        unsigned int rxOutOfOrderBytes:1;
        unsigned int successfulConnections:1;
        unsigned int timeOfDay:1;
        unsigned int timestamp:1;
        unsigned int assocReason:1;
        unsigned int associatedTime:1;
        unsigned int band:1;
        unsigned int captiveFlag:1;
        unsigned int cca:1;
        unsigned int channel:1;
        unsigned int channelWidth:1;
        unsigned int colocatedState:1;
        unsigned int disassocReason:1;
        unsigned int phyMode:1;
        unsigned int roundTripTimeAvg:1;
        unsigned int roundTripTimeAvgActive:1;
        unsigned int roundTripTimeMin:1;
        unsigned int roundTripTimeMinActive:1;
        unsigned int roundTripTimeVar:1;
        unsigned int roundTripTimeVarActive:1;
        unsigned int rssi:1;
        unsigned int securityType:1;
        unsigned int snr:1;
        unsigned int hotspot20:1;
    } _has;
}

+ (Class)otherUniqueIDsType;
+ (Class)additionalUniqueIDsType;
@property(nonatomic) unsigned int associatedTime; // @synthesize associatedTime=_associatedTime;
@property(nonatomic) unsigned long long timeOfDay; // @synthesize timeOfDay=_timeOfDay;
@property(nonatomic) unsigned int phyMode; // @synthesize phyMode=_phyMode;
@property(nonatomic) int cca; // @synthesize cca=_cca;
@property(nonatomic) int snr; // @synthesize snr=_snr;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) unsigned int channelWidth; // @synthesize channelWidth=_channelWidth;
@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned int band; // @synthesize band=_band;
@property(nonatomic) unsigned int assocReason; // @synthesize assocReason=_assocReason;
@property(nonatomic) unsigned int disassocReason; // @synthesize disassocReason=_disassocReason;
@property(nonatomic) _Bool hotspot20; // @synthesize hotspot20=_hotspot20;
@property(nonatomic) unsigned int colocatedState; // @synthesize colocatedState=_colocatedState;
@property(nonatomic) unsigned int captiveFlag; // @synthesize captiveFlag=_captiveFlag;
@property(nonatomic) unsigned int securityType; // @synthesize securityType=_securityType;
@property(nonatomic) float roundTripTimeVarActive; // @synthesize roundTripTimeVarActive=_roundTripTimeVarActive;
@property(nonatomic) float roundTripTimeAvgActive; // @synthesize roundTripTimeAvgActive=_roundTripTimeAvgActive;
@property(nonatomic) float roundTripTimeMinActive; // @synthesize roundTripTimeMinActive=_roundTripTimeMinActive;
@property(nonatomic) float roundTripTimeVar; // @synthesize roundTripTimeVar=_roundTripTimeVar;
@property(nonatomic) float roundTripTimeAvg; // @synthesize roundTripTimeAvg=_roundTripTimeAvg;
@property(nonatomic) float roundTripTimeMin; // @synthesize roundTripTimeMin=_roundTripTimeMin;
@property(nonatomic) unsigned long long rxOutOfOrderBytes; // @synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes;
@property(nonatomic) unsigned long long receivedDupes; // @synthesize receivedDupes=_receivedDupes;
@property(nonatomic) unsigned long long dataStalls; // @synthesize dataStalls=_dataStalls;
@property(nonatomic) unsigned long long reTxBytes; // @synthesize reTxBytes=_reTxBytes;
@property(nonatomic) unsigned long long bytesOutActive; // @synthesize bytesOutActive=_bytesOutActive;
@property(nonatomic) unsigned long long bytesInActive; // @synthesize bytesInActive=_bytesInActive;
@property(nonatomic) unsigned long long bytesOutTotal; // @synthesize bytesOutTotal=_bytesOutTotal;
@property(nonatomic) unsigned long long bytesInTotal; // @synthesize bytesInTotal=_bytesInTotal;
@property(nonatomic) unsigned long long packetsOut; // @synthesize packetsOut=_packetsOut;
@property(nonatomic) unsigned long long packetsIn; // @synthesize packetsIn=_packetsIn;
@property(nonatomic) unsigned long long failedConnections; // @synthesize failedConnections=_failedConnections;
@property(nonatomic) unsigned long long successfulConnections; // @synthesize successfulConnections=_successfulConnections;
@property(nonatomic) unsigned long long lqmTranCount; // @synthesize lqmTranCount=_lqmTranCount;
@property(nonatomic) unsigned long long lowqStay; // @synthesize lowqStay=_lowqStay;
@property(nonatomic) unsigned long long lowLQMStay; // @synthesize lowLQMStay=_lowLQMStay;
@property(nonatomic) unsigned long long faultyStay; // @synthesize faultyStay=_faultyStay;
@property(nonatomic) unsigned long long overAllStay; // @synthesize overAllStay=_overAllStay;
@property(nonatomic) double lon; // @synthesize lon=_lon;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSMutableArray *otherUniqueIDs; // @synthesize otherUniqueIDs=_otherUniqueIDs;
@property(retain, nonatomic) NSMutableArray *additionalUniqueIDs; // @synthesize additionalUniqueIDs=_additionalUniqueIDs;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAssociatedTime;
@property(nonatomic) _Bool hasTimeOfDay;
@property(nonatomic) _Bool hasPhyMode;
@property(nonatomic) _Bool hasCca;
@property(nonatomic) _Bool hasSnr;
@property(nonatomic) _Bool hasRssi;
@property(nonatomic) _Bool hasChannelWidth;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasBand;
@property(nonatomic) _Bool hasAssocReason;
@property(nonatomic) _Bool hasDisassocReason;
@property(nonatomic) _Bool hasHotspot20;
@property(nonatomic) _Bool hasColocatedState;
@property(nonatomic) _Bool hasCaptiveFlag;
@property(nonatomic) _Bool hasSecurityType;
@property(nonatomic) _Bool hasRoundTripTimeVarActive;
@property(nonatomic) _Bool hasRoundTripTimeAvgActive;
@property(nonatomic) _Bool hasRoundTripTimeMinActive;
@property(nonatomic) _Bool hasRoundTripTimeVar;
@property(nonatomic) _Bool hasRoundTripTimeAvg;
@property(nonatomic) _Bool hasRoundTripTimeMin;
@property(nonatomic) _Bool hasRxOutOfOrderBytes;
@property(nonatomic) _Bool hasReceivedDupes;
@property(nonatomic) _Bool hasDataStalls;
@property(nonatomic) _Bool hasReTxBytes;
@property(nonatomic) _Bool hasBytesOutActive;
@property(nonatomic) _Bool hasBytesInActive;
@property(nonatomic) _Bool hasBytesOutTotal;
@property(nonatomic) _Bool hasBytesInTotal;
@property(nonatomic) _Bool hasPacketsOut;
@property(nonatomic) _Bool hasPacketsIn;
@property(nonatomic) _Bool hasFailedConnections;
@property(nonatomic) _Bool hasSuccessfulConnections;
@property(nonatomic) _Bool hasLqmTranCount;
@property(nonatomic) _Bool hasLowqStay;
@property(nonatomic) _Bool hasLowLQMStay;
@property(nonatomic) _Bool hasFaultyStay;
@property(nonatomic) _Bool hasOverAllStay;
@property(nonatomic) _Bool hasLon;
@property(nonatomic) _Bool hasLat;
- (id)otherUniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)otherUniqueIDsCount;
- (void)addOtherUniqueIDs:(id)arg1;
- (void)clearOtherUniqueIDs;
- (id)additionalUniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalUniqueIDsCount;
- (void)addAdditionalUniqueIDs:(id)arg1;
- (void)clearAdditionalUniqueIDs;
@property(readonly, nonatomic) _Bool hasUniqueID;
@property(nonatomic) _Bool hasTimestamp;

@end

