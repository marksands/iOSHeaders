//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FuseUI/MusicEntityAbstractLockupView.h>

#import "MusicEntityContentDescriptorViewConfiguring.h"

@class MPUHalfTintedTransportButton, MusicEntityViewContentDescriptor, NSString, UIButton, UIImageView;

@interface MusicEntityHorizontalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring>
{
    MPUHalfTintedTransportButton *_addButton;
    UIImageView *_availableOfflineBadgeImageView;
    UIButton *_checkmarkButton;
    UIImageView *_explicitBadgeImageView;
    _Bool _isAvailableOffline;
    _Bool _isContainedWithinSplitViewPrimary;
    struct {
        unsigned int didSelectAddButton:1;
        unsigned int didSelectPlayButton:1;
        unsigned int didLayoutSubviews:1;
        unsigned int shouldLayoutAsEditing:1;
    } _delegateRespondsToSelector;
    id <MusicEntityHorizontalLockupViewDelegate> _delegate;
    double _textContentLeadingInset;
}

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 textDescriptorHeightAdditions:(double)arg4 artworkSize:(struct CGSize)arg5;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 artworkSize:(struct CGSize)arg4;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
+ (double)defaultTextDescriptorHeightAdditionsForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
@property(readonly, nonatomic) double textContentLeadingInset; // @synthesize textContentLeadingInset=_textContentLeadingInset;
@property(nonatomic) __weak id <MusicEntityHorizontalLockupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_shouldLayoutAsEditing;
- (void)_addButtonTouchEntered:(id)arg1;
- (void)_addButtonTouchExited:(id)arg1;
- (void)_addButtonTouchUpInside:(id)arg1;
- (void)_addButtonTouchDownInside:(id)arg1;
@property(retain, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;
@property(readonly, nonatomic) struct CGSize artworkSize;
- (id)_addButton;
- (_Bool)_shouldShowPlayButton;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

