//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PreferencesUI/PSUIAdvertisingController.h>

@class PSSpecifier;

@interface PSUIAdvertisingRestrictionsController : PSUIAdvertisingController
{
    PSSpecifier *_allowedGroup;
    id _restrictionsChangedObserver;
    id _effectiveSettingsChangedObserver;
}

@property(retain, nonatomic) id effectiveSettingsChangedObserver; // @synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver;
@property(retain, nonatomic) id restrictionsChangedObserver; // @synthesize restrictionsChangedObserver=_restrictionsChangedObserver;
- (void).cxx_destruct;
- (id)featureValue:(id)arg1;
- (void)setFeatureValue:(id)arg1 specifier:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;

@end

