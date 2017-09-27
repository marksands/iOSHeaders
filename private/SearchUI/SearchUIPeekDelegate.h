//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerPreviewingDelegate.h"

@class NSIndexPath, NSString, SearchUITableViewController;

@interface SearchUIPeekDelegate : NSObject <UIViewControllerPreviewingDelegate>
{
    SearchUITableViewController *_viewController;
    NSIndexPath *_peekedIndexPath;
}

@property(retain) NSIndexPath *peekedIndexPath; // @synthesize peekedIndexPath=_peekedIndexPath;
@property __weak SearchUITableViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)unhidePeekedCell;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)_previewingContext:(id)arg1 willDismissViewController:(id)arg2;
- (_Bool)needToHandleTransparencyForViewController:(id)arg1;
- (void)_previewingContext:(id)arg1 willPresentViewController:(id)arg2;
- (id)customViewForInteractiveHighlightForIndexPath:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

