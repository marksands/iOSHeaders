//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class NSError, QLItem;

__attribute__((visibility("hidden")))
@interface QLErrorItemViewController : QLItemViewController
{
    NSError *_error;
    QLItem *_previewItem;
}

@property(retain) QLItem *previewItem; // @synthesize previewItem=_previewItem;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)_updateLabelsWithCurrentErrorIfNeeded;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorView;
- (void)loadView;

@end

