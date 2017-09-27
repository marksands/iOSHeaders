//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseTableViewController.h>

@interface MusicProductTracklistTableViewController : MusicLibraryBrowseTableViewController
{
    double _trackNumberColumnWidth;
}

- (void)_updateTrackNumberColumnWidthForVisibleHeaders;
- (void)_updateTrackNumberColumnWidthForVisibleCells;
- (void)_updateTrackNumberColumnWidthForHeader:(id)arg1;
- (void)_updateTrackNumberColumnWidthForCell:(id)arg1;
- (void)_updateTrackNumberColumnWidthAllowingVisibleCellUpdate:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleEntityProviderDidInvalidate;
- (void)handleContentSizeCategoryDidChange;
- (void)viewDidLoad;

@end

