//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SABackgroundContextObject.h"

@class NSArray, NSString;

@interface SASiriKitSetting : AceObject <SABackgroundContextObject>
{
}

+ (id)siriKitSettingWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriKitSetting;
@property(nonatomic) _Bool useSASAutoSelectionFeature;
@property(copy, nonatomic) NSArray *listOfSiriKitEnabledDomains;
@property(nonatomic) _Bool applySASToFirstPartyDomains;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

