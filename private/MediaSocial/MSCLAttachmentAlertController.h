//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

#import "MSCLPhotoPickerDelegate.h"

@class MSCLConfiguration, MSCLPhotoPickerShelfViewController, NSArray, NSString, SKUIClientContext, UIAlertAction;

@interface MSCLAttachmentAlertController : UIAlertController <MSCLPhotoPickerDelegate>
{
    UIAlertAction *_action0;
    SKUIClientContext *_clientContext;
    MSCLConfiguration *_configuration;
    id <MSCLAttachmentAlertDelegate> _MSCLDelegate;
    MSCLPhotoPickerShelfViewController *_photoPickerViewController;
    _Bool _allowsCameraAndMicrophonePicker;
}

@property(nonatomic) _Bool allowsCameraAndMicrophonePicker; // @synthesize allowsCameraAndMicrophonePicker=_allowsCameraAndMicrophonePicker;
@property(nonatomic) __weak id <MSCLAttachmentAlertDelegate> MSCLDelegate; // @synthesize MSCLDelegate=_MSCLDelegate;
@property(readonly, copy, nonatomic) MSCLConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_uploadAudioTitle;
- (id)_recordAudioTitle;
- (id)_photoLibraryButtonTitle;
- (void)_finishWithAttachmentResult:(long long)arg1;
- (id)_chooseSongButtonTitle;
- (id)_cancelButtonTitle;
- (id)_cameraButtonTitle;
- (void)_music_button0Action;
- (void)MSCLPhotoPickerSelectedAttachmentsDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *selectedAttachments;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

