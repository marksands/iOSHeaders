//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSUUID;

@interface DMFApplicationPolicyMonitor : NSObject
{
    NSArray *_policyTypes;
    NSUUID *_policyMonitorIdentifier;
}

@property(readonly, nonatomic) NSUUID *policyMonitorIdentifier; // @synthesize policyMonitorIdentifier=_policyMonitorIdentifier;
@property(copy, nonatomic) NSArray *policyTypes; // @synthesize policyTypes=_policyTypes;
- (void).cxx_destruct;
- (_Bool)askPermissionForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)_fetchCategoriesIfNeededForBundleIdentifiers:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;

@end

