//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCPreviewInteractionPresenter, UIView;

@protocol NCPreviewInteractionPresenterDelegate <NSObject>

@optional
- (void)previewInteractionPresenterDidDismiss:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidPresent:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidCommitToPresentation:(NCPreviewInteractionPresenter *)arg1;
- (_Bool)previewInteractionPresenterShouldBegin:(NCPreviewInteractionPresenter *)arg1;
- (UIView *)containerViewForPreviewInteractionPresenter:(NCPreviewInteractionPresenter *)arg1;
@end

