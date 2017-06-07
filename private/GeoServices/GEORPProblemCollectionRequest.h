//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEORPUserCredentials, NSData, NSMutableArray, NSString;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying>
{
    NSString *_countryCode;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
}

+ (Class)requestElementType;
@property(retain, nonatomic) GEOLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSData *devicePushToken; // @synthesize devicePushToken=_devicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *osRelease; // @synthesize osRelease=_osRelease;
@property(retain, nonatomic) NSString *hwMachine; // @synthesize hwMachine=_hwMachine;
@property(retain, nonatomic) NSMutableArray *requestElements; // @synthesize requestElements=_requestElements;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUserLocation;
@property(readonly, nonatomic) _Bool hasUserEmail;
@property(readonly, nonatomic) _Bool hasDevicePushToken;
@property(readonly, nonatomic) _Bool hasUserCredentials;
@property(readonly, nonatomic) _Bool hasInputLanguage;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasOsRelease;
@property(readonly, nonatomic) _Bool hasHwMachine;
- (id)requestElementAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestElementsCount;
- (void)addRequestElement:(id)arg1;
- (void)clearRequestElements;

@end

