//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"
#import "VideosExtrasZoomingImageInteractiveTransitionSource.h"
#import "VideosExtrasZoomingImageTransitionParticipant.h"

@class NSString, UIPageViewController;

@interface VideosExtrasImageBrowserViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant>
{
    _Bool _allowsPinchingImageForInteractiveZoomingImageTransition;
    id <VideosExtrasImageBrowserViewControllerDataSource> _dataSource;
    id <VideosExtrasImageBrowserViewControllerDelegate> _delegate;
    id <VideosExtrasZoomingImageInteractiveTransitionSource> _zoomingImageInteractiveTransitionSource;
    unsigned long long _visibleImageIndex;
    UIPageViewController *_pageViewController;
}

@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) unsigned long long visibleImageIndex; // @synthesize visibleImageIndex=_visibleImageIndex;
@property(nonatomic) _Bool allowsPinchingImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition;
@property(nonatomic) __weak id <VideosExtrasZoomingImageInteractiveTransitionSource> zoomingImageInteractiveTransitionSource; // @synthesize zoomingImageInteractiveTransitionSource=_zoomingImageInteractiveTransitionSource;
@property(nonatomic) __weak id <VideosExtrasImageBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VideosExtrasImageBrowserViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_visibleImageViewController;
- (void)_updateTitle;
- (void)_updatePageViewController;
- (void)_removePageViewController;
- (unsigned long long)_numberOfImages;
- (id)_imageViewControllerAtIndex:(unsigned long long)arg1;
- (void)_addPageViewForController:(id)arg1 toView:(id)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

