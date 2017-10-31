//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UITableView;

@interface MPAVRoutingViewControllerUpdateDisplayedRoutesState : NSObject
{
    NSArray *_pickedRoutes;
    NSArray *_pendingPickedRoutes;
    NSArray *_visibleIndexPaths;
    NSArray *_displayableAvailableRoutes;
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    NSArray *_cachedPendingPickedRoutes;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *cachedPendingPickedRoutes; // @synthesize cachedPendingPickedRoutes=_cachedPendingPickedRoutes;
@property(copy, nonatomic) NSArray *cachedPickedRoutes; // @synthesize cachedPickedRoutes=_cachedPickedRoutes;
@property(copy, nonatomic) NSArray *cachedRoutes; // @synthesize cachedRoutes=_cachedRoutes;
@property(copy, nonatomic) NSArray *displayableAvailableRoutes; // @synthesize displayableAvailableRoutes=_displayableAvailableRoutes;
@property(copy, nonatomic) NSArray *visibleIndexPaths; // @synthesize visibleIndexPaths=_visibleIndexPaths;
@property(copy, nonatomic) NSArray *pendingPickedRoutes; // @synthesize pendingPickedRoutes=_pendingPickedRoutes;
@property(copy, nonatomic) NSArray *pickedRoutes; // @synthesize pickedRoutes=_pickedRoutes;
- (void).cxx_destruct;

@end
