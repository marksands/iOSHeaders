//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNContactsLogger;

@interface CNTCC : NSObject
{
    long long _simulateType;
    _Bool _simulateAccessPrompt;
    _Bool _simulateAccessPromptGranted;
    double _simulateAccessPromptDelay;
    id <CNContactsLogger> _logger;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)_simulateQueue;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(_Bool)arg1 withDelay:(double)arg2;
- (void)simulate:(long long)arg1;
- (unsigned char)checkAuditToken:(CDStruct_6ad76789)arg1;
- (void)accessRequestWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned char)isAccessRestricted;
- (int)accessPreflight;
- (id)initWithEnvironment:(id)arg1;
- (id)init;

@end
