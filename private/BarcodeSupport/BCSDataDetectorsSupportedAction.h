//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BarcodeSupport/BCSAction.h>

#import "BCSActionDelegate.h"

@class CNContact, DDScannerResult, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate>
{
    NSArray *_actions;
    DDScannerResult *_scannerResult;
    CNContact *_contact;
    NSString *_icsString;
}

@property(readonly, copy, nonatomic) NSString *icsString; // @synthesize icsString=_icsString;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) DDScannerResult *scannerResult; // @synthesize scannerResult=_scannerResult;
- (void).cxx_destruct;
- (id)_actionStringsArray;
- (void)determineActionabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)debugDescriptionExtraInfoDictionary;
- (void)_performActionAndShowActionPickerIfNeeded:(_Bool)arg1;
- (void)performAction;
- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)localizedDefaultActionDescription;
- (id)localizedActionDescription;
- (id)url;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

