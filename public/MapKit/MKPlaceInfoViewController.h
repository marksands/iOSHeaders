//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import "MKModuleViewControllerProtocol.h"
#import "MKOfflineModeViewController.h"
#import "UIGestureRecognizerDelegate.h"
#import "_MKInfoCardChildViewControllerAnalyticsDelegate.h"

@class MKMapItem, MKPlaceSectionRowView, NSMutableArray, NSString, UILongPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKOfflineModeViewController, UIGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    NSMutableArray *_rows;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MKPlaceSectionRowView *_selectedRow;
    _Bool _offlineMode;
    _Bool _bottomHairlineHidden;
    MKMapItem *_mapItem;
    id <MKPlaceActionManagerProtocol> _actionDelegate;
    id <_MKPlaceItem> _placeItem;
}

@property(retain, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(nonatomic) __weak id <MKPlaceActionManagerProtocol> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) _Bool bottomHairlineHidden; // @synthesize bottomHairlineHidden=_bottomHairlineHidden;
@property(nonatomic) _Bool offlineMode; // @synthesize offlineMode=_offlineMode;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3;
- (void)_shareAddress:(id)arg1 fromView:(id)arg2;
- (id)draggableContent;
- (void)_configureRow:(id)arg1 ofType:(unsigned long long)arg2 withValue:(id)arg3;
- (id)_createViewForInfoRow:(unsigned long long)arg1;
- (id)_addRowForType:(unsigned long long)arg1 withValue:(id)arg2 toViews:(id)arg3;
- (void)_addContactRow:(id)arg1 ofType:(unsigned long long)arg2 toViews:(id)arg3 defaultTitle:(id)arg4;
- (void)_updateViewsAnimated:(_Bool)arg1;
- (void)_menuDismissed:(id)arg1;
- (void)_rowLongPressed:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)actionTypeFromRowType:(unsigned long long)arg1;
- (_Bool)shouldShowDetails;
- (id)contact;
@property(readonly, nonatomic) _Bool hasContent;
- (void)viewDidLoad;
- (id)initWithPlaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

