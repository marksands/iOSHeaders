//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLUIImageViewController.h>

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSDictionary, NSString, UIImagePickerController, UINavigationItem;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSDictionary *_options;
    UIImagePickerController *_imagePicker;
    UINavigationItem *_navItem;
    id _delegate;
    Class _viewClass;
    unsigned int _canCreateMetadata;
    _Bool _parentInPopoverException;
}

@property(nonatomic) _Bool parentInPopoverException; // @synthesize parentInPopoverException=_parentInPopoverException;
- (void)videoViewPlaybackDidFail:(id)arg1;
- (_Bool)videoViewCanCreateMetadata:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
- (void)_trimVideo:(id)arg1;
- (struct CGRect)previewFrame;
- (int)cropOverlayMode;
- (void)_cancelTrim:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;
- (void)loadView;
- (void)setViewClass:(Class)arg1;
- (Class)_viewClass;
- (id)uiipc_imagePickerController;
- (id)_trimMessage;
- (id)uiipc_imagePickerOptions;
- (void)setImagePickerOptions:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)navigationItem;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithVideoURL:(id)arg1 trimTitle:(id)arg2;
- (id)initWithProperties:(id)arg1;
- (id)initWithPhoto:(id)arg1 trimTitle:(id)arg2;
- (void)_setupNavigationItemAndTrimTitle:(id)arg1;
- (_Bool)_editingForThirdParty;
- (_Bool)_displaysFullScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

