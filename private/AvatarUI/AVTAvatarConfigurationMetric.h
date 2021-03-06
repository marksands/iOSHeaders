//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTAvatarConfigurationMetric.h"

@class NSString;

@interface AVTAvatarConfigurationMetric : NSObject <AVTAvatarConfigurationMetric>
{
}

+ (void)enumerateDifferencesFromConfiguration:(id)arg1 toConfiguration:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (long long)impactForSettingKind:(CDStruct_597dd055)arg1;
+ (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
+ (long long)gapFromDistance:(unsigned long long)arg1;
+ (unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2;
+ (id)defaultMetric;
- (long long)gapFromDistance:(unsigned long long)arg1;
- (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
- (unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

