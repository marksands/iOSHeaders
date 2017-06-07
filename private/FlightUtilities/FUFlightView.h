//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FlightUtilities/FUFlightInfoViewProtocol-Protocol.h>
#import <FlightUtilities/UIPageViewControllerDataSource-Protocol.h>
#import <FlightUtilities/UIPageViewControllerDelegate-Protocol.h>

@class FUFLightTrack, FUPlaneTrackerAnnotationView, MKMapView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIPageControl, UIPageViewController, UIVisualEffectView;
@protocol FUFlightViewDelegate;

@interface FUFlightView : UIView <UIPageViewControllerDelegate, UIPageViewControllerDataSource, FUFlightInfoViewProtocol>
{
    FUPlaneTrackerAnnotationView *_planeTracker;
    NSMutableArray *_tracks;
    FUFLightTrack *_currentTrack;
    NSMutableArray *_controllers;
    UIPageViewController *_pageViewController;
    _Bool _spotlightMode;
    NSLayoutConstraint *_pageControllerHeightConstraint;
    NSArray *_allLegs;
    unsigned long long _displayStyle;
    _Bool _ignoreMapUpdate;
    _Bool _highlightCurrentFlightLeg;
    _Bool _showInfoPanel;
    long long _currentFocus;
    MKMapView *_mapView;
    UIVisualEffectView *_backBlurView;
    UIView *_borderLineViewLandscape;
    UIView *_borderLineViewPortrait;
    UIPageControl *_pageControl;
    UIView *_errorView;
    UIView *_loadingView;
    NSArray *_flights;
    long long _selectedFlight;
    long long _selectedLeg;
    id <FUFlightViewDelegate> _delegate;
    NSLayoutConstraint *_bottomMapConstraint;
    NSLayoutConstraint *_leadingMapConstraint;
    struct UIEdgeInsets _mapInsets;
}

@property(retain, nonatomic) NSLayoutConstraint *leadingMapConstraint; // @synthesize leadingMapConstraint=_leadingMapConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomMapConstraint; // @synthesize bottomMapConstraint=_bottomMapConstraint;
@property __weak id <FUFlightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showInfoPanel; // @synthesize showInfoPanel=_showInfoPanel;
@property(nonatomic) _Bool highlightCurrentFlightLeg; // @synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg;
@property(nonatomic) long long selectedLeg; // @synthesize selectedLeg=_selectedLeg;
@property(nonatomic) long long selectedFlight; // @synthesize selectedFlight=_selectedFlight;
@property(retain, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property(retain) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UIView *borderLineViewPortrait; // @synthesize borderLineViewPortrait=_borderLineViewPortrait;
@property(nonatomic) __weak UIView *borderLineViewLandscape; // @synthesize borderLineViewLandscape=_borderLineViewLandscape;
@property(nonatomic) __weak UIVisualEffectView *backBlurView; // @synthesize backBlurView=_backBlurView;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) long long currentFocus; // @synthesize currentFocus=_currentFocus;
@property(nonatomic) _Bool ignoreMapUpdate; // @synthesize ignoreMapUpdate=_ignoreMapUpdate;
@property(nonatomic) struct UIEdgeInsets mapInsets; // @synthesize mapInsets=_mapInsets;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (void).cxx_destruct;
- (id)infoViewControllerCreate;
- (void)flightInfoView:(id)arg1 didUpdateFocus:(long long)arg2;
- (_Bool)hasFollowupContent:(id)arg1;
- (void)changeCurrentPage:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)updateMapCamera;
- (void)fitMap:(_Bool)arg1;
- (id)flightCamera;
- (id)departureCamera;
- (id)arrivalCamera;
- (void)cleanupView;
- (void)addTrack:(id)arg1;
- (void)setAbsoluteIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateMapArcs;
- (_Bool)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3;
- (id)allLegs;
- (unsigned long long)absoluteLegIndex;
- (id)flightForLeg:(id)arg1;
- (id)currentLeg;
- (id)currentFlight;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (_Bool)preservesSuperviewLayoutMargins;
- (void)layoutMarginsDidChange;
- (void)showInfo;
- (void)showError;
- (void)showLoading;
- (void)updateBorderLines;
- (_Bool)landscapeModeAffectedByTraitsChange:(id)arg1;
- (_Bool)landscapeMode;
- (void)setupStyles;
- (void)removeMapBackground;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

