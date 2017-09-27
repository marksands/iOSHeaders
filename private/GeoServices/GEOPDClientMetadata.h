//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOAdditionalEnabledMarkets, GEOLocation, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDClientMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _knownClientResolvedTypes;
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    unsigned int _dayOfWeek;
    NSString *_debugApiKey;
    NSString *_deviceCountryCode;
    NSString *_deviceDisplayLanguage;
    GEOLocation *_deviceExtendedLocation;
    NSMutableArray *_deviceHistoricalLocations;
    NSString *_deviceKeyboardLanguage;
    NSString *_deviceSpokenLanguage;
    unsigned int _hourOfDay;
    int _requiredVersion;
    int _resultListAttributionSupport;
    unsigned int _timeSinceMapEnteredForeground;
    _Bool _enablePreflightVenues;
    struct {
        unsigned int dayOfWeek:1;
        unsigned int hourOfDay:1;
        unsigned int requiredVersion:1;
        unsigned int resultListAttributionSupport:1;
        unsigned int timeSinceMapEnteredForeground:1;
        unsigned int enablePreflightVenues:1;
    } _has;
}

+ (Class)deviceHistoricalLocationType;
@property(retain, nonatomic) NSString *debugApiKey; // @synthesize debugApiKey=_debugApiKey;
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations; // @synthesize deviceHistoricalLocations=_deviceHistoricalLocations;
@property(retain, nonatomic) GEOLocation *deviceExtendedLocation; // @synthesize deviceExtendedLocation=_deviceExtendedLocation;
@property(nonatomic) unsigned int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) unsigned int hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(retain, nonatomic) NSString *deviceSpokenLanguage; // @synthesize deviceSpokenLanguage=_deviceSpokenLanguage;
@property(retain, nonatomic) NSString *deviceKeyboardLanguage; // @synthesize deviceKeyboardLanguage=_deviceKeyboardLanguage;
@property(retain, nonatomic) NSString *deviceDisplayLanguage; // @synthesize deviceDisplayLanguage=_deviceDisplayLanguage;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEnablePreflightVenues;
@property(nonatomic) _Bool enablePreflightVenues; // @synthesize enablePreflightVenues=_enablePreflightVenues;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (void)setKnownClientResolvedTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)clearKnownClientResolvedTypes;
@property(readonly, nonatomic) int *knownClientResolvedTypes;
@property(readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
@property(readonly, nonatomic) _Bool hasDebugApiKey;
- (int)StringAsRequiredVersion:(id)arg1;
- (id)requiredVersionAsString:(int)arg1;
@property(nonatomic) _Bool hasRequiredVersion;
@property(nonatomic) int requiredVersion; // @synthesize requiredVersion=_requiredVersion;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
@property(readonly, nonatomic) _Bool hasDeviceExtendedLocation;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) _Bool hasHourOfDay;
- (int)StringAsResultListAttributionSupport:(id)arg1;
- (id)resultListAttributionSupportAsString:(int)arg1;
@property(nonatomic) _Bool hasResultListAttributionSupport;
@property(nonatomic) int resultListAttributionSupport; // @synthesize resultListAttributionSupport=_resultListAttributionSupport;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasTimeSinceMapEnteredForeground;
@property(readonly, nonatomic) _Bool hasDeviceSpokenLanguage;
@property(readonly, nonatomic) _Bool hasDeviceKeyboardLanguage;
@property(readonly, nonatomic) _Bool hasDeviceDisplayLanguage;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (void)dealloc;
@property(retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
- (id)initWithTraits:(id)arg1;

@end

