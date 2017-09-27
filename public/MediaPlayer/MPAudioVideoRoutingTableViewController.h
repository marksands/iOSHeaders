//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MPAVRoutingControllerDelegate.h"

@class MPAVRoutingController, NSArray, NSString;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAVRoutingControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    int _airPlayPasswordAlertDidCancelToken;
    MPAVRoutingController *_routingController;
    long long _avItemType;
    _Bool _displayMirroringRoutes;
    NSArray *_displayedRoutes;
    _Bool _wirelessDisplayCapableRouteIsPicked;
    _Bool _wirelessDisplayRouteIsPendingAsPicked;
}

+ (id)routesPreferringMirroring;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void).cxx_destruct;
- (_Bool)_wirelessDisplayCapableRouteIsPicked;
- (id)_pickedRoute;
- (id)_effectivePickedRouteReturningActualPickedRouteType:(long long *)arg1;
- (id)_displayedRoutes;
- (id)_availableRoutes;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (void)_debugButtonAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1 displayMirroringRoutes:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

