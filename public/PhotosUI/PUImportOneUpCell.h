//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotosSharingGridCell.h>

#import "PXChangeObserver.h"

@class NSString, PUImportItemViewModel, UITextField;

__attribute__((visibility("hidden")))
@interface PUImportOneUpCell : PUPhotosSharingGridCell <PXChangeObserver>
{
    id <PUImportOneUpCellDisplayDelegate> _displayDelegate;
    PUImportItemViewModel *_importItem;
    UITextField *_debugTextField;
    long long _thumbnailRequestID;
}

+ (double)alphaForSelectedCells;
@property(nonatomic) long long thumbnailRequestID; // @synthesize thumbnailRequestID=_thumbnailRequestID;
@property(retain, nonatomic) UITextField *debugTextField; // @synthesize debugTextField=_debugTextField;
@property(retain, nonatomic) PUImportItemViewModel *importItem; // @synthesize importItem=_importItem;
@property(nonatomic) __weak id <PUImportOneUpCellDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void).cxx_destruct;
- (void)updateDebugLabel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)layoutSubviews;
- (void)updateBadge;
- (void)setImage:(id)arg1 isPlaceholder:(_Bool)arg2;
- (void)refreshThumbnail;
- (void)updateSelectedVisualAppearance;
- (void)updatePhotoViewForImportItem:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void *)contextForObservingViewModelChanges;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPUImportOneUpCellInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

