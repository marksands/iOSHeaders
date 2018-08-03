//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DNDSBackingStoreRecord.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_immediateBypassEventSourceType;
    NSString *_immediateBypassCNGroupIdentifier;
    NSNumber *_repeatEventSourceBehaviorEnabledSetting;
}

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)recordForLegacyPrivilegedSenderType:(unsigned long long)arg1 legacyAddressBookID:(int)arg2;
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting; // @synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier; // @synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier;
@property(readonly, copy, nonatomic) NSNumber *immediateBypassEventSourceType; // @synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)init;
- (unsigned long long)legacyPrivilegedSenderType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

