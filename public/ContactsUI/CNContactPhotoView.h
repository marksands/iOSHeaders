//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "CNAvatarViewDelegate.h"
#import "QLPreviewControllerDataSource.h"
#import "QLPreviewControllerDelegate.h"
#import "UIDropInteractionDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CNAvatarView, CNMutableContact, NSArray, NSString, PRLikeness, UIButton, UIDropInteraction, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNAvatarViewDelegate>
{
    _Bool _editing;
    _Bool _modified;
    _Bool _shouldAllowTakePhotoAction;
    _Bool _prohibitsPersonaFetch;
    _Bool _isAnimatingBounce;
    _Bool _acceptsImageDrop;
    NSArray *_contacts;
    CNAvatarView *_avatarView;
    id <CNPresenterDelegate> _presenterDelegate;
    id <CNContactPhotoViewDelegate> _delegate;
    CNMutableContact *_pendingEditContact;
    PRLikeness *_originalLikeness;
    PRLikeness *_currentLikeness;
    UIButton *_addPhotoButton;
    UIButton *_editPhotoButton;
    UIImageView *_attributionImageView;
    NSArray *_variableConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIDropInteraction *_dropInteraction;
}

+ (id)supportedPasteboardTypes;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool acceptsImageDrop; // @synthesize acceptsImageDrop=_acceptsImageDrop;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(nonatomic) _Bool isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
@property(retain, nonatomic) UIImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property(retain, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
@property(retain, nonatomic) UIButton *addPhotoButton; // @synthesize addPhotoButton=_addPhotoButton;
@property(nonatomic) _Bool prohibitsPersonaFetch; // @synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch;
@property(retain, nonatomic) PRLikeness *currentLikeness; // @synthesize currentLikeness=_currentLikeness;
@property(retain, nonatomic) PRLikeness *originalLikeness; // @synthesize originalLikeness=_originalLikeness;
@property(retain, nonatomic) CNMutableContact *pendingEditContact; // @synthesize pendingEditContact=_pendingEditContact;
@property(nonatomic) __weak id <CNContactPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CNPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) _Bool shouldAllowTakePhotoAction; // @synthesize shouldAllowTakePhotoAction=_shouldAllowTakePhotoAction;
@property(nonatomic) _Bool modified; // @synthesize modified=_modified;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)_bounceSmallPhoto;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_zoomContactPhoto;
- (id)previewPath;
- (void)presentImagePicker:(id)arg1 withStyle:(long long)arg2;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (id)_createImagePicker;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)saveImagePickerMediaFromInfo:(id)arg1 toContact:(id)arg2 saveToCameraRoll:(_Bool)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_presentPhotoEditingSheet;
- (_Bool)_isUsingCuratedPhoto;
- (id)_localizedStringForProfileAction:(id)arg1 type:(unsigned long long)arg2;
- (void)updateAttributionBadge;
- (void)updatePhotoAndNotifyDelegate:(_Bool)arg1;
- (void)updatePhoto;
- (void)resetPhoto;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)longPressGesture:(id)arg1;
- (void)avatarTapped:(id)arg1;
- (void)disablePhotoTapGesture;
- (void)setHighlightedFrame:(_Bool)arg1;
- (_Bool)hasPhoto;
- (void)saveEdits;
- (void)saveEditsWithPendingContact:(id)arg1;
- (id)currentImageDataAndCropRect:(struct CGRect *)arg1;
- (id)currentImageData;
- (void)updateConstraints;
- (void)updateFontSizes;
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (id)contact;
- (_Bool)isMeContact;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 monogrammerStyle:(long long)arg2 shouldAllowTakePhotoAction:(_Bool)arg3 threeDTouchEnabled:(_Bool)arg4 allowsImageDrops:(_Bool)arg5 imageRenderer:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

