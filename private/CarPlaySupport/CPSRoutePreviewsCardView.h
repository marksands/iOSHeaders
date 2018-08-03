//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarPlaySupport/CPSTripPreviewsCardView.h>

#import "CPSAlternateRouteSelecting.h"

@class CPSAlternateRoutesView, NSString, UIButton;

@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting>
{
    CPSAlternateRoutesView *_alternatesView;
    UIButton *_goButton;
}

@property(readonly, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(readonly, nonatomic) CPSAlternateRoutesView *alternatesView; // @synthesize alternatesView=_alternatesView;
- (void).cxx_destruct;
- (id)_linearFocusItems;
- (id)preferredFocusEnvironments;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (void)setSelectedTrip:(id)arg1;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

