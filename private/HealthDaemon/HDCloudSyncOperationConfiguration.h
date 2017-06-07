//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDatabase, CKOperationGroup, HDProfile, NSString;

@interface HDCloudSyncOperationConfiguration : NSObject
{
    CKDatabase *_privateDatabase;
    CKOperationGroup *_operationGroup;
    NSString *_syncContainerPrefix;
    NSString *_ownerIdentifier;
    HDProfile *_profile;
    unsigned long long _options;
    long long _reason;
}

@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(readonly, copy, nonatomic) NSString *syncContainerPrefix; // @synthesize syncContainerPrefix=_syncContainerPrefix;
@property(readonly, nonatomic) CKOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(readonly, nonatomic) CKDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
- (void).cxx_destruct;
- (id)initWithCKContainer:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 ownerIdentifier:(id)arg4 profile:(id)arg5 options:(unsigned long long)arg6 reason:(long long)arg7;

@end

