//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKLocationManagerObserver.h"

@class CLInUseAssertion, MKLocationManager, NSString, UILabel;

@interface MKStarkCompassView : UIView <MKLocationManagerObserver>
{
    UIView *_contentsView;
    _Bool _monitoringCourse;
    UILabel *_label;
    MKLocationManager *_locationManager;
    CLInUseAssertion *_assertion;
    _Bool _contentsHidden;
    _Bool _active;
    int _compassPoint;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool contentsHidden; // @synthesize contentsHidden=_contentsHidden;
@property(nonatomic) int compassPoint; // @synthesize compassPoint=_compassPoint;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_canStartLocationUpdates;
- (void)_stopLocationUpdates;
- (void)_startLocationUpdates;
- (void)_updateContents;
- (void)_updateStyling;
- (void)layoutSubviews;
- (void)_createSubviews;
- (void)_setActive:(_Bool)arg1;
- (void)dealloc;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithSharedMKLocationManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

