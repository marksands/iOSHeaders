//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DOCManagedPermission : NSObject
{
    NSString *_hostIdentifier;
}

+ (id)defaultPermission;
@property(retain, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasRestrictions;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id *)arg4;
- (unsigned long long)dataOwnerStateForBundleIdentifier:(id)arg1;
- (unsigned long long)dataOwnerStateForItem:(id)arg1;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 targetBundleIdentifier:(id)arg2;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 targetSearchableItem:(id)arg2;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 targetItem:(id)arg2;
- (id)filterItems:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetItem:(id)arg3;
- (id)filterProviders:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(_Bool)arg4;
- (id)filterBundleIdentifiers:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(_Bool)arg4;

@end
