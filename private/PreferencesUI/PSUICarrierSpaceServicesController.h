//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/CTCarrierSpaceClientDelegate-Protocol.h>

@class CTCarrierSpaceClient, NSArray, NSObject, NSString, PSUIAppInstallController;
@protocol OS_dispatch_queue;

@interface PSUICarrierSpaceServicesController : PSListController <CTCarrierSpaceClientDelegate>
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceClient *_carrierSpaceClient;
    NSArray *_appsList;
    PSListController *_phoneSettingsController;
    PSUIAppInstallController *_appInstallController;
}

@property(retain, nonatomic) PSUIAppInstallController *appInstallController; // @synthesize appInstallController=_appInstallController;
@property(retain, nonatomic) PSListController *phoneSettingsController; // @synthesize phoneSettingsController=_phoneSettingsController;
@property(retain, nonatomic) NSArray *appsList; // @synthesize appsList=_appsList;
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (void).cxx_destruct;
- (void)appsDidChange:(id)arg1;
- (void)moreAppsTapped:(id)arg1;
- (_Bool)shouldShowMoreApps;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)primaryAppSpecifier;
- (id)specifiers;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)simStatusChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

