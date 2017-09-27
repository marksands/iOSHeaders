//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import "MKETAProviderObserver.h"
#import "MKModuleViewControllerProtocol.h"
#import "MKStackingViewControllerFixedHeightAware.h"

@class MKPlaceHeaderButton, MKPlaceSectionRowView, NSArray, NSAttributedString, NSString, _MKPlaceActionButtonController;

__attribute__((visibility("hidden")))
@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver>
{
    MKPlaceSectionRowView *_buttonsContainerView;
    NSArray *_constraints;
    MKPlaceHeaderButton *_primaryButton;
    MKPlaceHeaderButton *_secondaryButton;
    MKPlaceHeaderButton *_tertiaryButton;
    NSAttributedString *_primaryAttributedString;
    NSString *_currentETAString;
    _Bool _resizableViewsDisabled;
    id <_MKPlaceItem> _placeItem;
    id <GEOTransitLineItem> _lineItem;
    id <MKPlaceHeaderButtonsViewControllerDelegate> _delegate;
    unsigned long long _primaryButtonType;
    _MKPlaceActionButtonController *_secondaryButtonController;
    _MKPlaceActionButtonController *_tertiaryButtonController;
    double _contentAlpha;
}

@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(retain, nonatomic) _MKPlaceActionButtonController *tertiaryButtonController; // @synthesize tertiaryButtonController=_tertiaryButtonController;
@property(retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController; // @synthesize secondaryButtonController=_secondaryButtonController;
@property(nonatomic) unsigned long long primaryButtonType; // @synthesize primaryButtonType=_primaryButtonType;
@property(nonatomic) __weak id <MKPlaceHeaderButtonsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(nonatomic) _Bool resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (id)updateButton:(id)arg1 withController:(id)arg2;
- (void)primaryButtonSelected:(id)arg1;
- (void)setupPrimaryButton;
- (void)setConstraints;
- (_Bool)shouldStackForButtons:(id)arg1;
- (void)_contentSizeDidChange;
- (void)ETAProviderUpdated:(id)arg1;
- (id)primaryAttributedString;
- (id)attributedStringWith:(id)arg1;
- (id)rerouteAttributedString;
- (id)directionAttributedStringWithETAString;
- (id)etaStringFor:(unsigned long long)arg1 travelTime:(double)arg2;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithLineItem:(id)arg1;
- (id)initWithPlaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

