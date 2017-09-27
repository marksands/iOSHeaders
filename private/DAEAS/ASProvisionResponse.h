//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem
{
    NSArray *_policies;
    NSNumber *_status;
    _Bool _remoteWipe;
    _Bool _accountOnlyRemoteWipe;
    NSString *_policyType;
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (id)description;
- (id)asParseRules;
- (void)_setStatus:(id)arg1;
- (void)_setAccountOnlyRemoteWipe:(id)arg1;
- (void)_setRemoteWipe:(id)arg1;
- (void)_setPolicies:(id)arg1;
- (_Bool)accountOnlyRemoteWipe;
- (_Bool)remoteWipe;
- (id)status;
- (id)policies;
- (void)setPolicyType:(id)arg1;
- (id)policyType;
- (id)initWithPolicyType:(id)arg1;
- (id)init;

@end

