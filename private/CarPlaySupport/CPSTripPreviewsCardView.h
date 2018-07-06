//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CPRouteChoice, CPSCardPlatterView, CPTrip, CPTripPreviewTextConfiguration, NSArray;

@interface CPSTripPreviewsCardView : UIView
{
    NSArray *_trips;
    id <CPSTripInitiating> _tripDelegate;
    CPTripPreviewTextConfiguration *_textConfiguration;
    CPTrip *_selectedTrip;
    CPRouteChoice *_selectedRouteChoice;
    CPSCardPlatterView *_platterView;
}

@property(readonly, nonatomic) CPSCardPlatterView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak CPRouteChoice *selectedRouteChoice; // @synthesize selectedRouteChoice=_selectedRouteChoice;
@property(nonatomic) __weak CPTrip *selectedTrip; // @synthesize selectedTrip=_selectedTrip;
@property(retain, nonatomic) CPTripPreviewTextConfiguration *textConfiguration; // @synthesize textConfiguration=_textConfiguration;
@property(nonatomic) __weak id <CPSTripInitiating> tripDelegate; // @synthesize tripDelegate=_tripDelegate;
@property(readonly, copy, nonatomic) NSArray *trips; // @synthesize trips=_trips;
- (void).cxx_destruct;
- (void)notifyDidSelectRouteChoice:(id)arg1;
- (void)startTripButtonPressed:(id)arg1;
- (void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2;
- (id)setupGoButton;
- (id)initWithTrips:(id)arg1 textConfiguration:(id)arg2;

@end

