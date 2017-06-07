//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDNanoSyncPersistentUserInfoCopying-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>
{
    long long _sequenceNumber;
    NSString *_defaultSourceBundleIdentifier;
    NSData *_restoreIdentifier;
    int _statusCode;
    struct {
        unsigned int sequenceNumber:1;
        unsigned int statusCode:1;
    } _has;
}

+ (id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
@property(retain, nonatomic) NSString *defaultSourceBundleIdentifier; // @synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSData *restoreIdentifier; // @synthesize restoreIdentifier=_restoreIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasDefaultSourceBundleIdentifier;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) _Bool hasSequenceNumber;
@property(readonly, nonatomic) _Bool hasRestoreIdentifier;
- (id)nanoSyncDescription;
- (id)decodedRestoreUUID;
- (_Bool)hasRequiredFields;
- (id)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

