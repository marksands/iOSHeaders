//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INCreateNoteIntentExport.h"

@class INNoteContent, INSpeakableString, NSString;

@interface INCreateNoteIntent : INIntent <INCreateNoteIntentExport>
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
- (void)setGroupName:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *groupName;
- (void)setContent:(id)arg1;
@property(readonly, copy, nonatomic) INNoteContent *content;
- (void)setTitle:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *title;
- (id)initWithTitle:(id)arg1 content:(id)arg2 groupName:(id)arg3;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

