//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/MKMapViewDelegate-Protocol.h>

@class HKLocationReadings, MKMapView, NSString;

@interface HKRouteView : UIView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
}

- (void).cxx_destruct;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)layoutSubviews;
- (void)setLocationReadings:(id)arg1;
- (void)_clearMapViewIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

