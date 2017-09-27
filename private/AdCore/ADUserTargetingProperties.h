//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface ADUserTargetingProperties : PBCodable <NSCopying>
{
    CDStruct_95bda58d _accountTypes;
    CDStruct_95bda58d _deviceModes;
    double _clientClockTime;
    NSString *_administrativeArea;
    int _advertisingIdentifierMonthResetCount;
    NSString *_algoId;
    NSString *_appID;
    NSString *_appVersion;
    int _appsRank;
    NSString *_carrierMCC;
    NSString *_carrierMNC;
    int _connectionType;
    NSString *_currentCarrierMCC;
    NSString *_currentCarrierMNC;
    NSString *_dPIDString;
    NSString *_deviceModel;
    NSString *_deviceRequestID;
    float _horizontalAccuracy;
    NSString *_iAdIDString;
    NSString *_iTunesStore;
    NSString *_isoCountryCode;
    float _latitude;
    NSString *_localeIdentifier;
    NSString *_locality;
    float _longitude;
    NSString *_osVersionAndBuild;
    NSString *_postalCode;
    int _runState;
    NSString *_storeFrontLanguageLocaleIdentifier;
    NSString *_subAdministrativeArea;
    NSMutableArray *_targetings;
    float _timezone;
    NSString *_toroIDString;
    NSMutableArray *_userKeyboards;
    _Bool _isOnInternationalDataRoaming;
    _Bool _limitAdTracking;
    struct {
        unsigned int clientClockTime:1;
        unsigned int advertisingIdentifierMonthResetCount:1;
        unsigned int appsRank:1;
        unsigned int connectionType:1;
        unsigned int horizontalAccuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int runState:1;
        unsigned int timezone:1;
        unsigned int isOnInternationalDataRoaming:1;
        unsigned int limitAdTracking:1;
    } _has;
}

+ (Class)targetingType;
+ (Class)userKeyboardType;
@property(retain, nonatomic) NSString *storeFrontLanguageLocaleIdentifier; // @synthesize storeFrontLanguageLocaleIdentifier=_storeFrontLanguageLocaleIdentifier;
@property(nonatomic) _Bool isOnInternationalDataRoaming; // @synthesize isOnInternationalDataRoaming=_isOnInternationalDataRoaming;
@property(retain, nonatomic) NSString *currentCarrierMCC; // @synthesize currentCarrierMCC=_currentCarrierMCC;
@property(retain, nonatomic) NSString *currentCarrierMNC; // @synthesize currentCarrierMNC=_currentCarrierMNC;
@property(retain, nonatomic) NSString *carrierMCC; // @synthesize carrierMCC=_carrierMCC;
@property(retain, nonatomic) NSString *carrierMNC; // @synthesize carrierMNC=_carrierMNC;
@property(retain, nonatomic) NSString *deviceRequestID; // @synthesize deviceRequestID=_deviceRequestID;
@property(nonatomic) int advertisingIdentifierMonthResetCount; // @synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *dPIDString; // @synthesize dPIDString=_dPIDString;
@property(retain, nonatomic) NSString *algoId; // @synthesize algoId=_algoId;
@property(retain, nonatomic) NSString *iAdIDString; // @synthesize iAdIDString=_iAdIDString;
@property(retain, nonatomic) NSString *toroIDString; // @synthesize toroIDString=_toroIDString;
@property(nonatomic) _Bool limitAdTracking; // @synthesize limitAdTracking=_limitAdTracking;
@property(retain, nonatomic) NSMutableArray *targetings; // @synthesize targetings=_targetings;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int appsRank; // @synthesize appsRank=_appsRank;
@property(retain, nonatomic) NSMutableArray *userKeyboards; // @synthesize userKeyboards=_userKeyboards;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSString *iTunesStore; // @synthesize iTunesStore=_iTunesStore;
@property(retain, nonatomic) NSString *osVersionAndBuild; // @synthesize osVersionAndBuild=_osVersionAndBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) float timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) double clientClockTime; // @synthesize clientClockTime=_clientClockTime;
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
@property(readonly, nonatomic) _Bool hasStoreFrontLanguageLocaleIdentifier;
- (int)StringAsConnectionType:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) _Bool hasIsOnInternationalDataRoaming;
@property(readonly, nonatomic) _Bool hasCurrentCarrierMCC;
@property(readonly, nonatomic) _Bool hasCurrentCarrierMNC;
@property(readonly, nonatomic) _Bool hasCarrierMCC;
@property(readonly, nonatomic) _Bool hasCarrierMNC;
@property(readonly, nonatomic) _Bool hasDeviceRequestID;
@property(nonatomic) _Bool hasAdvertisingIdentifierMonthResetCount;
@property(readonly, nonatomic) _Bool hasSubAdministrativeArea;
@property(readonly, nonatomic) _Bool hasLocality;
@property(readonly, nonatomic) _Bool hasAdministrativeArea;
@property(readonly, nonatomic) _Bool hasPostalCode;
@property(readonly, nonatomic) _Bool hasDPIDString;
@property(readonly, nonatomic) _Bool hasAlgoId;
@property(readonly, nonatomic) _Bool hasIAdIDString;
@property(readonly, nonatomic) _Bool hasToroIDString;
@property(nonatomic) _Bool hasLimitAdTracking;
- (id)targetingAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetingsCount;
- (void)addTargeting:(id)arg1;
- (void)clearTargetings;
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
- (int)StringAsAccountTypes:(id)arg1;
- (id)accountTypesAsString:(int)arg1;
- (void)setAccountTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)accountTypeAtIndex:(unsigned long long)arg1;
- (void)addAccountType:(int)arg1;
- (void)clearAccountTypes;
@property(readonly, nonatomic) int *accountTypes;
@property(readonly, nonatomic) unsigned long long accountTypesCount;
- (int)StringAsDeviceModes:(id)arg1;
- (id)deviceModesAsString:(int)arg1;
- (void)setDeviceModes:(int *)arg1 count:(unsigned long long)arg2;
- (int)deviceModeAtIndex:(unsigned long long)arg1;
- (void)addDeviceMode:(int)arg1;
- (void)clearDeviceModes;
@property(readonly, nonatomic) int *deviceModes;
@property(readonly, nonatomic) unsigned long long deviceModesCount;
@property(nonatomic) _Bool hasAppsRank;
- (id)userKeyboardAtIndex:(unsigned long long)arg1;
- (unsigned long long)userKeyboardsCount;
- (void)addUserKeyboard:(id)arg1;
- (void)clearUserKeyboards;
@property(readonly, nonatomic) _Bool hasLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasITunesStore;
@property(readonly, nonatomic) _Bool hasOsVersionAndBuild;
@property(readonly, nonatomic) _Bool hasAppVersion;
- (int)StringAsRunState:(id)arg1;
- (id)runStateAsString:(int)arg1;
@property(nonatomic) _Bool hasRunState;
@property(nonatomic) int runState; // @synthesize runState=_runState;
@property(nonatomic) _Bool hasTimezone;
@property(readonly, nonatomic) _Bool hasDeviceModel;
@property(readonly, nonatomic) _Bool hasAppID;
@property(nonatomic) _Bool hasClientClockTime;
- (void)dealloc;

@end

