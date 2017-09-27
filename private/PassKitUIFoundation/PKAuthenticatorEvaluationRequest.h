//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString;

@interface PKAuthenticatorEvaluationRequest : NSObject
{
    _Bool _assumeUserIntentAvailable;
    NSString *_reason;
    NSString *_processName;
    NSNumber *_processIdentifier;
    NSString *_PINTitle;
    NSNumber *_PINLength;
    NSData *_externalizedContext;
    struct __SecAccessControl *_accessControlRef;
}

@property(nonatomic) _Bool assumeUserIntentAvailable; // @synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable;
@property(nonatomic) struct __SecAccessControl *accessControlRef; // @synthesize accessControlRef=_accessControlRef;
@property(retain, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(copy, nonatomic) NSNumber *PINLength; // @synthesize PINLength=_PINLength;
@property(copy, nonatomic) NSString *PINTitle; // @synthesize PINTitle=_PINTitle;
@property(copy, nonatomic) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPolicy:(long long)arg1;
- (id)init;

@end

