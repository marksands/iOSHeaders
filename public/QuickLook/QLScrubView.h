//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, QLPageNumberView, QLThumbnailView;

__attribute__((visibility("hidden")))
@interface QLScrubView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _needsThumbLayout;
    double _thumbOrigin;
    double _thumbEnd;
    double _thumbHeight;
    long long _pageCount;
    long long _selectedPage;
    NSMutableDictionary *_thumbViews;
    NSMutableArray *_visibleThumbIndexes;
    QLThumbnailView *_selectedThumbnailView;
    QLPageNumberView *_pageNumberLabel;
    id <QLScrubViewDataSource> _dataSource;
    id <QLScrubViewDelegate> _delegate;
    double _topOffset;
    double _bottomOffset;
}

+ (double)defaultWidth;
@property(nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property __weak id <QLScrubViewDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <QLScrubViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_updateSelectedThumbnailView;
- (void)layoutSubviews;
- (void)_hidePageLabel;
- (void)_updatePageLabelPosition;
- (void)_showPageLabel;
- (struct CGRect)_thumbnailFrameForPageAtIndex:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)longTapReceived:(id)arg1;
- (void)tapReceived:(id)arg1;
- (void)panReceived:(id)arg1;
- (void)_handleSwipAtLocation:(struct CGPoint)arg1;
- (void)_notifyPageChanged;
- (void)selectPageNumber:(long long)arg1;
- (void)reloadThumbnails;
- (void)_removeThumbviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

