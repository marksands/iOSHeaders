//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FMFUI/FMF3HiddenMapTrackingHandlerDelegate-Protocol.h>
#import <FMFUI/FMFMapOptionsViewControllerDelegate-Protocol.h>
#import <FMFUI/FMFMapViewDelegateInternalDelegate-Protocol.h>
#import <FMFUI/FMFNoLocationViewDelegate-Protocol.h>
#import <FMFUI/FMFSessionDelegateInternal-Protocol.h>

@class FMF3HiddenMapTrackingHandler, FMFMapOptionsViewController, FMFMapViewDelegateInternal, FMFNoLocationView, FMFRefreshBarButtonItem, FMFSession, FMFTitleView, MKMapView, MKUserTrackingBarButtonItem, NSSet, NSString, UIBarButtonItem, UIColor, UIImageView, UIToolbar, UIView;
@protocol FMFMapViewControllerDelegate;

@interface FMFMapViewController : UIViewController <FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, FMF3HiddenMapTrackingHandlerDelegate, FMFNoLocationViewDelegate, FMFMapOptionsViewControllerDelegate>
{
    _Bool _shouldZoomToFitNewLocations;
    _Bool _shouldZoomToFitMeAndLocations;
    _Bool _showFloatingMapLocationButton;
    _Bool _isMapCenteringDisabled;
    _Bool _isSimpleMap;
    _Bool _canShowNoLocation;
    _Bool __refreshingIsPaused;
    _Bool __blockDidReceiveAnimation;
    _Bool __isRenderingInitialMap;
    _Bool _viewWillAppearCalled;
    _Bool _alwaysShowAccuracy;
    _Bool _mapTypeLoaded;
    id <FMFMapViewControllerDelegate> _delegate;
    MKMapView *_mapView;
    UIColor *_annotationTintColor;
    FMFSession *_fmfSession;
    FMFMapViewDelegateInternal *_mapViewDelegate;
    NSSet *__preloadedHandles;
    FMFNoLocationView *_noLocationView;
    NSSet *__internalHandlesShowingLocations;
    FMFMapOptionsViewController *_mapOptionsVC;
    FMFTitleView *_titleView;
    void *_addressBook;
    UIToolbar *_toolbar;
    MKUserTrackingBarButtonItem *_userLocationButton;
    UIBarButtonItem *_directionsBarButtonItem;
    UIBarButtonItem *_infoBarButtonItem;
    FMF3HiddenMapTrackingHandler *_hiddenMap;
    UIToolbar *_floatingLocationToolbar;
    UIView *_floatingToolbarView;
    FMFRefreshBarButtonItem *_refreshButton;
    UIImageView *_cachedMapView;
    unsigned long long _defaultMapType;
    struct UIEdgeInsets _edgeInsets;
}

+ (struct CGSize)annotationImageSize;
@property(nonatomic) _Bool mapTypeLoaded; // @synthesize mapTypeLoaded=_mapTypeLoaded;
@property(nonatomic) unsigned long long defaultMapType; // @synthesize defaultMapType=_defaultMapType;
@property(retain, nonatomic) UIImageView *cachedMapView; // @synthesize cachedMapView=_cachedMapView;
@property(retain, nonatomic) FMFRefreshBarButtonItem *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIView *floatingToolbarView; // @synthesize floatingToolbarView=_floatingToolbarView;
@property(retain, nonatomic) UIToolbar *floatingLocationToolbar; // @synthesize floatingLocationToolbar=_floatingLocationToolbar;
@property(retain, nonatomic) FMF3HiddenMapTrackingHandler *hiddenMap; // @synthesize hiddenMap=_hiddenMap;
@property(retain, nonatomic) UIBarButtonItem *infoBarButtonItem; // @synthesize infoBarButtonItem=_infoBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *directionsBarButtonItem; // @synthesize directionsBarButtonItem=_directionsBarButtonItem;
@property(retain, nonatomic) MKUserTrackingBarButtonItem *userLocationButton; // @synthesize userLocationButton=_userLocationButton;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) FMFTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) FMFMapOptionsViewController *mapOptionsVC; // @synthesize mapOptionsVC=_mapOptionsVC;
@property(nonatomic) _Bool alwaysShowAccuracy; // @synthesize alwaysShowAccuracy=_alwaysShowAccuracy;
@property(nonatomic) _Bool viewWillAppearCalled; // @synthesize viewWillAppearCalled=_viewWillAppearCalled;
@property(nonatomic) _Bool _isRenderingInitialMap; // @synthesize _isRenderingInitialMap=__isRenderingInitialMap;
@property(nonatomic) _Bool _blockDidReceiveAnimation; // @synthesize _blockDidReceiveAnimation=__blockDidReceiveAnimation;
@property(nonatomic) _Bool _refreshingIsPaused; // @synthesize _refreshingIsPaused=__refreshingIsPaused;
@property(retain, nonatomic) NSSet *_internalHandlesShowingLocations; // @synthesize _internalHandlesShowingLocations=__internalHandlesShowingLocations;
@property(retain, nonatomic) FMFNoLocationView *noLocationView; // @synthesize noLocationView=_noLocationView;
@property(nonatomic) _Bool canShowNoLocation; // @synthesize canShowNoLocation=_canShowNoLocation;
@property(nonatomic) _Bool isSimpleMap; // @synthesize isSimpleMap=_isSimpleMap;
@property(retain, nonatomic) NSSet *_preloadedHandles; // @synthesize _preloadedHandles=__preloadedHandles;
@property(retain, nonatomic) FMFMapViewDelegateInternal *mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property(retain, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
@property(copy, nonatomic) UIColor *annotationTintColor; // @synthesize annotationTintColor=_annotationTintColor;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) _Bool isMapCenteringDisabled; // @synthesize isMapCenteringDisabled=_isMapCenteringDisabled;
@property(nonatomic) _Bool showFloatingMapLocationButton; // @synthesize showFloatingMapLocationButton=_showFloatingMapLocationButton;
@property(nonatomic) _Bool shouldZoomToFitMeAndLocations; // @synthesize shouldZoomToFitMeAndLocations=_shouldZoomToFitMeAndLocations;
@property(nonatomic) _Bool shouldZoomToFitNewLocations; // @synthesize shouldZoomToFitNewLocations=_shouldZoomToFitNewLocations;
@property(nonatomic) __weak id <FMFMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAllAnnotationsDueToAddressBookUpdate;
- (id)_internalAnnotationTintColor;
- (id)_selectedHandleAnnotation;
- (void)_updateTitleViewLocation:(id)arg1;
- (id)titleViewForSelectedHandle;
- (id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;
- (id)annotationImageForHandle:(id)arg1;
- (void)hideCachedMap;
- (void)mapViewDidFinishRenderingMap;
- (void)didReceiveLocationForDelegateCallback:(id)arg1;
- (void)didUpdateUserLocation:(id)arg1;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(_Bool)arg1;
- (void)regionWillChangeAnimated:(_Bool)arg1;
- (void)didDeselectLocation:(id)arg1;
- (void)didSelectLocation:(id)arg1;
- (void)hiddenMapTrackerDidUpdateMapToTrackingType:(long long)arg1;
- (void)removeAllFriendLocationsFromMap;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)updateRefreshForLocation:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)zoomAndSelectHandle:(id)arg1;
- (void)zoomToFit:(_Bool)arg1;
- (void)zoomToFit;
- (void)stopShowingLocationsForHandles:(id)arg1;
- (void)startShowingLocationsForHandles:(id)arg1;
@property(copy, nonatomic) NSSet *handlesShowingLocations;
- (void)resumeRefreshingLocations;
- (void)stopRefreshingLocations;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)mapTypeChangedNotification:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)presentMapOptionsModal:(id)arg1;
- (_Bool)isCompact;
- (void)infoButtonTapped:(id)arg1;
- (void)getDirections;
- (void)_updateDirectionsButtonEnabled;
- (void)openInMapsButtonTapped:(id)arg1;
- (void)refreshButtonTapped:(id)arg1;
- (_Bool)sessionContainsHandle:(id)arg1;
- (void)removeAnnotationsFromMapForHandle:(id)arg1;
- (id)locationOnMapForHandle:(id)arg1 enforceServerId:(_Bool)arg2;
- (_Bool)singleAnnotationOnMap;
- (void)selectAnnotationIfSingleFriend:(id)arg1;
- (void)deselectAllAnnotations;
- (void)selectAnnotationIfSingleForMac;
- (_Bool)canSelectAnnotation:(id)arg1;
- (_Bool)isLocationAlreadyOnMap:(id)arg1;
- (void)updateMapWithNewLocation:(id)arg1 animated:(_Bool)arg2;
- (_Bool)mapHasUserLocations;
- (void)updateNoLocationView:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)loadCachedLocationsForHandles;
- (void)enablePreloadedHandles;
- (void)loadDelegate;
- (void)destroySession;
- (void)removeHandlesFromSession;
- (void)addHandlesToSession;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)viewWillAppearWillMoveToWindowSetup;
- (void)viewWillAppear:(_Bool)arg1;
- (id)openInAppURL;
- (void)_updateLocationButtonEnabled;
- (void)addFloatingToolbar;
- (void)viewDidLoad;
- (void)loadView;
- (void)_authorizeMonitoringLocation;
- (void)initializeDefaults;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 handles:(id)arg2;
- (id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
