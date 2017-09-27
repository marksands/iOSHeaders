//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEORPUserCredentials, NSData, NSString;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying>
{
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    _Bool _didOptIn;
    struct {
        unsigned int didOptIn:1;
    } _has;
}

@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSData *devicePushToken; // @synthesize devicePushToken=_devicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(nonatomic) _Bool didOptIn; // @synthesize didOptIn=_didOptIn;
@property(retain, nonatomic) NSString *problemId; // @synthesize problemId=_problemId;
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
@property(readonly, nonatomic) _Bool hasUserEmail;
@property(readonly, nonatomic) _Bool hasDevicePushToken;
@property(readonly, nonatomic) _Bool hasUserCredentials;
@property(nonatomic) _Bool hasDidOptIn;
@property(readonly, nonatomic) _Bool hasProblemId;
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;

@end

