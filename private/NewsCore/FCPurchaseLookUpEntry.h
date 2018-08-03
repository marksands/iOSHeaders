//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface FCPurchaseLookUpEntry : NSObject
{
    _Bool _isNewsAppPurchase;
    _Bool _hasShownRenewalNotice;
    unsigned long long _purchaseType;
    unsigned long long _purchaseValidationState;
    NSDate *_lastVerificationTime;
    NSDate *_lastVerificationFailureTime;
    NSString *_purchaseID;
    NSDate *_dateOfExpiration;
    NSString *_identifier;
    NSString *_tagID;
}

@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool hasShownRenewalNotice; // @synthesize hasShownRenewalNotice=_hasShownRenewalNotice;
@property(copy, nonatomic) NSDate *dateOfExpiration; // @synthesize dateOfExpiration=_dateOfExpiration;
@property(nonatomic) _Bool isNewsAppPurchase; // @synthesize isNewsAppPurchase=_isNewsAppPurchase;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(copy, nonatomic) NSDate *lastVerificationFailureTime; // @synthesize lastVerificationFailureTime=_lastVerificationFailureTime;
@property(copy, nonatomic) NSDate *lastVerificationTime; // @synthesize lastVerificationTime=_lastVerificationTime;
@property(nonatomic) unsigned long long purchaseValidationState; // @synthesize purchaseValidationState=_purchaseValidationState;
@property(nonatomic) unsigned long long purchaseType; // @synthesize purchaseType=_purchaseType;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastVerificationTime:(id)arg4 lastVerificationFailureTime:(id)arg5 purchaseType:(unsigned long long)arg6 purchaseValidationState:(unsigned long long)arg7 isNewsAppPurchase:(_Bool)arg8 dateOfExpiration:(id)arg9 hasShownRenewalNotice:(_Bool)arg10;

@end

