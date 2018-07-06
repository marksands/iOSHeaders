//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STListViewController.h>

#import "STRestrictionsPINControllerDelegate.h"

@class NSObject<STRootViewModelCoordinator>, NSString, PSSpecifier, STAllowanceProgressGroupSpecifierProvider, STDevicePickupsUsageGroupSpecifierProvider, STMostUsedGroupSpecifierProvider, STNoUsageDataView, STNotificationsUsageGroupSpecifierProvider, STScreenTimeUsageGroupSpecifierProvider, STTestGroupSpecifierProvider, UILabel;

@interface STUsageDetailListController : STListViewController <STRestrictionsPINControllerDelegate>
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
    STTestGroupSpecifierProvider *_testProvider;
    STScreenTimeUsageGroupSpecifierProvider *_screenTimeProvider;
    STAllowanceProgressGroupSpecifierProvider *_allowancesProvider;
    STMostUsedGroupSpecifierProvider *_mostUsedProvider;
    STNotificationsUsageGroupSpecifierProvider *_notificationsProvider;
    STDevicePickupsUsageGroupSpecifierProvider *_pickupsProvider;
    UILabel *_titleLabel;
    STNoUsageDataView *_noUsageDataView;
    id _showingPinTarget;
    PSSpecifier *_showingPinSpecifier;
}

@property(retain, nonatomic) PSSpecifier *showingPinSpecifier; // @synthesize showingPinSpecifier=_showingPinSpecifier;
@property(retain, nonatomic) id showingPinTarget; // @synthesize showingPinTarget=_showingPinTarget;
@property(readonly, nonatomic) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider; // @synthesize pickupsProvider=_pickupsProvider;
@property(retain, nonatomic) STNotificationsUsageGroupSpecifierProvider *notificationsProvider; // @synthesize notificationsProvider=_notificationsProvider;
@property(retain, nonatomic) STMostUsedGroupSpecifierProvider *mostUsedProvider; // @synthesize mostUsedProvider=_mostUsedProvider;
@property(retain, nonatomic) STAllowanceProgressGroupSpecifierProvider *allowancesProvider; // @synthesize allowancesProvider=_allowancesProvider;
@property(retain, nonatomic) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider; // @synthesize screenTimeProvider=_screenTimeProvider;
@property(retain, nonatomic) STTestGroupSpecifierProvider *testProvider; // @synthesize testProvider=_testProvider;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)restoreSpecifierTarget;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (_Bool)validatePIN:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showDeviceSelectionAlertController:(id)arg1;
- (void)showNoUsageDataViewIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

