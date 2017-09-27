//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INSaveProfileInCarIntentExport.h"

@class NSNumber, NSString;

@interface INSaveProfileInCarIntent : INIntent <INSaveProfileInCarIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setProfileName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileName;
- (void)setProfileNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *profileNumber;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2;
- (id)_metadata;
- (id)_typedBackingStore;
@property(readonly, copy, nonatomic) NSString *profileLabel;
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

