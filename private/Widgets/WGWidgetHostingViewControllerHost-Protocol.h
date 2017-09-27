//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, WGWidgetHostingViewController;

@protocol WGWidgetHostingViewControllerHost <NSObject>

@optional
- (_Bool)shouldRemoveSnapshotWhenNotVisibleForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeNonASTCSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeNonCAMLSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeArchivedSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didRemoveSnapshotAtURL:(NSURL *)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didEncounterProblematicSnapshotAtURL:(NSURL *)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
- (long long)largestAvailableDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (long long)userSpecifiedDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
@end

